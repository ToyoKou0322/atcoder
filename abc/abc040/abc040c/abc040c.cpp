#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n+1);
    for(int i=1;i <= n;i++){
        cin >> a[i];
    }

    vector<long long> dp(n+1);
    dp[1] = 0;
    dp[2] = abs(a[1] - a[2]);
    for(int i=3;i <= n;i++){
        long long cost = abs(a[i]-a[i-1]);
        long long cost2 = abs(a[i] - a[i-2]);

        dp[i] = min(dp[i-1] + cost,dp[i-2] + cost2);
    }

    cout << dp[n] << endl;
    return 0;
}

