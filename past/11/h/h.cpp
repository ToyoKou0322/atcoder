#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<long long> w(n),v(n);
    for(int i=0;i < n;i++){
        cin >> w[i] >> v[i];
    }

    vector<vector<vector<long long>>> dp(n+1,vector<vector<long long>>(a+1,vector<long long>(b+1,-1)));
    dp[0][0][0] = 0;

    for(int i=1;i <= n;i++){
        for(int j=0;j <= a;j++){
            for(int k=0;k <= b;k++){
                if(dp[i-1][j][k] != -1){
                    dp[i][j][k] = max(dp[i][j][k],dp[i-1][j][k]);
                    
                    if(j+w[i-1] <= a){
                        dp[i][j+w[i-1]][k] = max(dp[i][j+w[i-1]][k],dp[i-1][j][k] + v[i-1]);
                    }

                    if(k+w[i-1] <= b){
                        dp[i][j][k+w[i-1]] = max(dp[i][j][k+w[i-1]],dp[i-1][j][k] + v[i-1]);
                    }
                }
            }
        }
    }

    long long ans = 0;
    for(int i=0;i <= a;i++){
        for(int j=0;j <= b;j++){
            ans = max(ans,dp[n][i][j]);
        }
    }

    cout << ans << endl;
    return 0;
}

