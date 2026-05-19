#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<vector<long long>> dp(n+1,vector<long long>(2));
    dp[0][0] = 0;
    dp[0][1] = LLONG_MIN;

    for(int i=1;i <= n;i++){
        dp[i][0] = max(dp[i-1][1] + 2*a[i-1],dp[i-1][0]);
        dp[i][1] = max(dp[i-1][0] + a[i-1],dp[i-1][1]);
    }

    long long ans = max(dp[n][0],dp[n][1]);

    cout << ans << endl;
    return 0;
}

