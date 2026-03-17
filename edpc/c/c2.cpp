#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long dp[3] = {0,0,0};
    for(int i=0;i < n;i++){
        long long a,b,c;
        cin  >> a >> b >> c;

        long long next_dp[3];
        next_dp[0] = max(dp[1],dp[2]) + a;
        next_dp[1] = max(dp[0],dp[2]) + b;
        next_dp[2] = max(dp[0],dp[1]) + c;

        dp[0] = next_dp[0];
        dp[1] = next_dp[1];
        dp[2] = next_dp[2];
    }

    long long ans = max({dp[0],dp[1],dp[2]});
    cout << ans << endl;
    return 0;
}

