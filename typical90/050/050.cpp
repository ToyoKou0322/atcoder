#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,l;
    cin >> n >> l;

    long long mod = 1e9+7;

    vector<long long> dp(1000000);
    for(int i=0;i < l;i++){
        dp[i] = 1;
    }

    for(int i=l;i <= n;i++){
        dp[i] = dp[i-1] + dp[i-l];
        dp[i] %= mod;
    }

    cout << dp[n] << endl;
    return 0;
}

