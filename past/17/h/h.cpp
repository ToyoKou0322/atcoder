#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> course(5010);
    for(int i=0;i < n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        course[b].push_back({a,c});
    }

    vector<long long> dp(m+1,LLONG_MAX);
    dp[0] = 0;

    for(int i=1;i <= 5000;i++){
        if(course[i].empty()) continue;

        vector<long long> next_dp = dp;

        for(auto x : course[i]){
            long long a = x.first;
            int c = x.second;

            for(int j=0;j <= m;j++){
                if(dp[j] == LLONG_MAX) continue;

                int next_c = min(m,j + c);

                next_dp[next_c] = min(next_dp[next_c],dp[j] + a);
            }
        }

        dp = next_dp;
    }

    if(dp[m] == LLONG_MAX){
        cout << -1 << endl;
    }else{
        cout << dp[m] << endl;
    }

    return 0;

}
