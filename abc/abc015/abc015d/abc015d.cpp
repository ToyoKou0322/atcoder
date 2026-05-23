#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int w;
    cin >> w;
    int n,k;
    cin >> n >> k;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    vector<vector<vector<long long>>> dp(n+1,vector<vector<long long>>(w+1,vector<long long>(k+1,-1)));
    dp[0][0][0] = 0;

    for(int i=1;i <= n;i++){
        for(int j=0;j <= w;j++){
            for(int l=0;l <= k;l++){
                if(dp[i-1][j][l] != -1){
                    dp[i][j][l] = max(dp[i-1][j][l],dp[i][j][l]);
                    if(j + a[i-1] <= w && l < k){
                        dp[i][j+a[i-1]][l+1] = max(dp[i-1][j][l] + b[i-1],dp[i][j+a[i-1]][l+1]);
                    }
                }
            }
        }
    }

    long long ans = 0;
    for(int i=0;i <= w;i++){
        for(int j=0;j <= k;j++){
            ans = max(ans,dp[n][i][j]);
        }
    }

    cout << ans << endl;
    return 0;
}

