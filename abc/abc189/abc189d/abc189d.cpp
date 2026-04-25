#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<vector<long long>> dp(n+1,vector<long long>(2,0));
    dp[0][1] = 1;
    dp[0][0] = 1;
    for(int i=1;i <= n;i++){
        if(s[i-1] == "AND"){
            dp[i][1] = dp[i-1][1];
            dp[i][0] = dp[i-1][1] + dp[i-1][0]*2;
        }else if(s[i-1] == "OR"){
            dp[i][1] = dp[i-1][0] + dp[i-1][1]*2;
            dp[i][0] = dp[i-1][0];
        }
    }

    cout << dp[n][1] << endl;
    return 0;
}

