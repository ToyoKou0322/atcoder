#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const long long INF = 1e18;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<vector<long long>> dp(n+1,vector<long long>(m+1,-INF));
    dp[0][0] = 0;

    for(long long i=1;i <= n;i++){
        for(long long j=0;j <= m;j++){
            dp[i][j] = dp[i-1][j];

            if(j > 0 && dp[i-1][j-1] != -INF){
                dp[i][j] = max(dp[i][j],dp[i-1][j-1] + j*a[i-1]);
            }
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}

