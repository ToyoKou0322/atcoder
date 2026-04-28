#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long mod = 998244353;
    vector<long long> a(n),b(m);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    sort(b.begin(),b.end());

    vector<long long> presumb(m+1);
    for(int i=0;i < m;i++){
        presumb[i+1] = presumb[i] + b[i];
        presumb[i+1] %= mod;
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        auto it = upper_bound(b.begin(),b.end(),a[i]);
        long long k = distance(b.begin(),it);
        ans += (k * a[i]) % mod;
        ans = (ans - presumb[k] + mod) % mod;
        ans += (presumb[m] - presumb[k] + mod) % mod;
        ans -= ((m - k) * a[i]) % mod;
        ans = (ans + mod) % mod;
    }
    cout << ans << endl;
    return 0;

}
