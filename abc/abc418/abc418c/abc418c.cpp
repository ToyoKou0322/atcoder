#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n),b(q);
    long long max_a = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        max_a = max(max_a,a[i]);
    }
    for(int i=0;i < q;i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());

    vector<long long> prefixSum(n+1);
    for(int i=0;i < n;i++){
        prefixSum[i+1] = prefixSum[i] + a[i];
    }

    for(int i=0;i < q;i++){
        if(b[i] > max_a){
            cout << -1 << endl;
            continue;
        }
        long long ans = 0;
        auto it = lower_bound(a.begin(),a.end(),b[i]);
        long long d = distance(a.begin(),it);
        ans += prefixSum[d];

        long long add = (b[i]-1)*(n-d)+1;
        ans += add;
        cout << ans << endl;
    }
    return 0;
}

