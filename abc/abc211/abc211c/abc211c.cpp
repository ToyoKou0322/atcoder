#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<vector<long long>> dp(s.size()+1,vector<long long>(9));
    dp[0][0] = 1;

    string t = "chokudai";

    long long mod = 1000000000 + 7;

    for(int i=1;i <= s.size();i++){
        for(int j=0;j < t.size();j++){
            dp[i][j+1] = dp[i-1][j+1];
            if(s[i-1] == t[j]){
                if(j == 0){
                    dp[i][j+1]++;
                }else{
                    dp[i][j+1] += dp[i][j];
                }
            }
            dp[i][j+1] %= mod;
        }
    }

    cout << dp[s.size()][8] << endl;
    return 0;
}

