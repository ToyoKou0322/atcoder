#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n),b(q);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < q;i++){
        cin >> b[i];
    }

    long long sum = 0;
    long long a_max = 0;
    for(int i=0;i < n;i++){
        a_max = max(a[i],a_max);
        sum += a[i];
    }

    sort(a.begin(),a.end());

    vector<long long> pre_a(n+1);
    for(int i=0;i < n;i++){
        pre_a[i+1] = pre_a[i] + a[i];
    }
    
    for(int i=0;i < q;i++){
        if(b[i] > a_max){
            cout << -1 << endl;
            continue;
        }

        auto it = lower_bound(pre_a.begin(),pre_a.end(),b[i]);
        long long idx = distance(a.begin(),it);
        long long ans = pre_a[idx];
        cout << ans << endl;
    }

    return 0;
}

