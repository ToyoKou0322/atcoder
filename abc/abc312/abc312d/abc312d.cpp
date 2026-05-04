#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    long long mod = 998244353;

    vector<vector<long long>> dp(n+1,vector<long long>(n+1));
    dp[0][0] = 1;

    long long x = 0;
    for(int i=0;i < n;i++){
        for(int j=0;j <= n;j++){
            if(s[i] == '('){
                dp[i+1][j+1] += dp[i][j];
            }else if(s[i] == ')'){
                if(j >= 1){
                    dp[i+1][j-1] += dp[i][j];
                    dp[i+1][j-1] %= mod;
                }
            }else{
                dp[i+1][j+1] += dp[i][j];
                if(j >= 1){
                    dp[i+1][j-1] += dp[i][j];
                    dp[i+1][j-1] %= mod;
                }
            }
            dp[i+1][j+1] %= mod;
        }
    }

    cout << dp[n][0] << endl;
    return 0;
}

