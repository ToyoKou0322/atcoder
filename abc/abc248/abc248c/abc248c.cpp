#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m,k;
    cin >> n >> m >> k;

    const long long mod = 998244353;

    vector<vector<long long>> dp(n+1,vector<long long>(k+1));
    dp[0][0] = 1;

    for(int i=0;i < n;i++){
        for(int j=0;j <= k;j++){
            if(dp[i][j] == 0) continue;
            for(int l=1;l <= m;l++){
                if(j + l <= k){
                    dp[i+1][j+l] = (dp[i+1][j+l] + dp[i][j]) % mod;
                }
            }
        }
    }

    long long ans = 0;
    for(int i=0;i <= k;i++){
        ans += dp[n][i];
        ans %= mod;
    }

    cout << ans << endl;
    return 0;
}

