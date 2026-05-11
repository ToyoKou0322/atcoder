#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    long long ok = a[0];
    long long ng = -1;

    while(abs(ok - ng) > 1){
        long long mid = ng + (ok - ng) / 2;

        long long req = 0;
        for(int i=0;i < n;i++){
            if(a[i] <= mid) continue;
            req += a[i] - mid;
        }

        if(req <= k){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    long long ans = 0;
    long long c = 0;
    for(int i=0;i < n;i++){
        if(a[i] > ok){
            ans += ((ok + 1 + a[i]) * (a[i] - ok)) / 2;
            c += a[i] - ok;
        }
    }

    ans += (k-c) * ok;

    cout << ans << endl;
}
