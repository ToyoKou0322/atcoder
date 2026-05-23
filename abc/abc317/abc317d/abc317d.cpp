#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x(n),y(n),z(n);
    long long sum = 0;
    long long t_sum = 0;
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i] >> z[i];
        sum += z[i];
        if(x[i] > y[i]){
            t_sum += z[i];
        }
    }

    if(t_sum >= (sum + 1) / 2){
        cout << 0 << endl;
        return 0;
    }

    vector<vector<long long>> dp(n+1,vector<long long>(sum+1,LLONG_MAX)); 
    dp[0][0] = 0;

    for(int i=1;i <= n;i++){
        for(int j=0;j <= sum;j++){
            if(dp[i-1][j] != LLONG_MAX){
                dp[i][j] = min(dp[i][j], dp[i-1][j]);
                if(x[i-1] > y[i-1]){
                    dp[i][j+z[i-1]] = min(dp[i][j+z[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j+z[i-1]] = min(dp[i][j+z[i-1]], dp[i-1][j] + ((y[i-1] + x[i-1] + 1) / 2) - x[i-1]);
                }
            }
        }
    }

    long long ans = LLONG_MAX;
    for(int i=(sum + 1)/2;i <= sum;i++){
        ans = min(ans,dp[n][i]);
    }

    cout << ans << endl;
    return 0;
}

