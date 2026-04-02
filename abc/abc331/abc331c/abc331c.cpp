#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> b = a;
    sort(b.begin(),b.end());
    vector<long long> prefixsum(n+1);
    for(int i=0;i < n;i++){
        prefixsum[i+1] = prefixsum[i] + b[i];
    }

    for(int i=0;i < n;i++){
        auto it = upper_bound(b.begin(),b.end(),a[i]);
        if(it == b.end()){
            cout << 0 << " ";
            continue;
        }
        int d = distance(b.begin(),it);
        long long ans = prefixsum[n] - prefixsum[d];
        cout << ans << " ";
    }
    return 0;
}

