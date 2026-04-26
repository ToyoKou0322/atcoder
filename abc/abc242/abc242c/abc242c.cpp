#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long mod = 998244353;

    vector<vector<long long>> dp(n+1,vector<long long>(10));
    for(int i=1;i <= 9;i++){
        dp[1][i] = 1;
    }
    for(int i=2;i <= n;i++){
        for(int j=1;j <= 9;j++){
            if(j == 9){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
            }else if(j == 1){
                dp[i][j] = (dp[i-1][j] + dp[i-1][j+1]) % mod;
            }else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % mod;
            }
            dp[i][j] %= mod;
        }
    }

    long long sum = 0;
    for(int i=1;i <= 9;i++){
        sum += dp[n][i];
        sum %= mod;
    }
    cout << sum << endl;
    return 0;
}

