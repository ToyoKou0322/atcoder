#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> prefixsum(n+1);
    for(int i=0;i < n;i++){
        prefixsum[i+1] = prefixsum[i] + a[i];
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        long long target = k + prefixsum[i];
        auto it = lower_bound(prefixsum.begin(),prefixsum.end(),target);
        if(it == prefixsum.end()){
            break;
        }
        long long idx = distance(prefixsum.begin(),it);
        ans += n - idx + 1;
    }

    cout << ans << endl;
    return 0;
}

