#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x,y;
    cin >> x >> y;
    vector<int> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    vector<vector<vector<long long>>> dp(n+1,vector<vector<long long>>(x+1,vector<long long>(y+1,LLONG_MAX)));
    dp[0][0][0] = 0;
    for(int i=1;i <= n;i++){
        for(int j=0;j <= x;j++){
            for(int k=0;k <= y;k++){
                if(dp[i-1][j][k] != LLONG_MAX){
                    dp[i][j][k] = min(dp[i-1][j][k],dp[i][j][k]);
                    dp[i][min(j+a[i-1],x)][min(k+b[i-1],y)] = min(dp[i-1][j][k] + 1,dp[i][min(j+a[i-1],x)][min(k+b[i-1],y)]);
                }
            }
        }
    }

    if(dp[n][x][y] == LLONG_MAX){
        cout << -1 << endl;
    }else{
        cout << dp[n][x][y] << endl;
    }
    return 0;
}

