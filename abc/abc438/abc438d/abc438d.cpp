#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<long long>> a(3,vector<long long>(n));
    for(int i=0;i < 3;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    vector<vector<long long>> dp(3,vector<long long>(n));
    dp[0][0] = a[0][0];

    for(int i=0;i < 3;i++){
        for(int j=0;j < n;j++){
            if(i == 0 && j > n-3) continue;
            if(i == 1 && j > n-2) continue;
            if(i == 2 && j < 2) continue;
            if(j >= 1){
                dp[i][j] = max(dp[i][j],dp[i][j-1] + a[i][j]);
            }
            if(i >= 1 && j >= 1){
                dp[i][j] = max(dp[i][j],dp[i-1][j-1] + a[i][j]);
            }
        }
    }

    long long ans = dp[2][n-1];

    cout << ans << endl;
    return 0;
}

