#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<long long> a(n),b(n),c(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<vector<tuple<long long,long long,long long>>> dp(n+1,vector<tuple<long long,long long,long long>>(x+1,{-1,-1,-1}));
    dp[0][0] = {0,1000000000,x};

    for(int i=1;i <= n;i++){
        for(int j=0;j <= x;j++){
            if(get<0>(dp[i-1][j]) != -1 && get<1>(dp[i-1][j]) != -1 && get<2>(dp[i-1][j]) != -1){
                dp[i][j] = max(dp[i][j],dp[i-1][j]);
                int next_j = j + b[i-1];
                if(next_j <= x){
                    dp[i][next_j] = max(dp[i][next_j],{get<0>(dp[i-1][j]) + c[i-1],get<1>(dp[i-1][j]) - a[i-1],get<2>(dp[i-1][j]) - b[i-1]});
                }
            }
        }
    }

    tuple<long long,long long,long long> ans = {0,0,0};
    for(int i=0;i <= x;i++){
        ans = max(ans,dp[n][i]);
    }

    cout << get<0>(ans) << " " << get<1>(ans) << " " << get<2>(ans) << endl;
    return 0;
}

