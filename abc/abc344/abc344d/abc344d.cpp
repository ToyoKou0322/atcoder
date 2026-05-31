#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    string t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<string>> s(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
        for(int j=0;j < a[i];j++){
            string x;
            cin >> x;
            s[i].push_back(x);
        }
    }

    vector<vector<long long>> dp(n+1,vector<long long>(t.size()+1,LLONG_MAX));
    dp[0][0] = 0;

    for(int i=1;i <= n;i++){
        for(int j=0;j <= t.size();j++){
            if(dp[i-1][j] != LLONG_MAX){
                dp[i][j] = min(dp[i][j],dp[i-1][j]);
                for(int k=0;k < a[i-1];k++){
                    if(s[i-1][k].size() + j > t.size()) continue;
                    bool ok = true;
                    for(int l=0;l < s[i-1][k].size();l++){
                        if(t[j + l] != s[i-1][k][l]){
                            ok = false;
                        }
                    }
                    if(ok){
                        dp[i][j+s[i-1][k].size()] = min(dp[i-1][j] + 1,dp[i][j+s[i-1][k].size()]);
                    }
                }
            }
        }
    }

    if(dp[n][t.size()] != LLONG_MAX){
        cout << dp[n][t.size()] << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}

