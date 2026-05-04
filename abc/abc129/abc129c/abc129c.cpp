#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    map<int,bool> isBroken;
    for(int i=0;i < m;i++){
        cin >> a[i];
        isBroken[a[i]] = true;
    }

    long long mod = 1000000007;

    long long ans = 0;
    vector<long long> dp(n+1);
    dp[0] = 1;
    
    for(int i=1;i <= n;i++){
        if(isBroken[i]) continue;
        dp[i] += dp[i-1];
        if(i >= 2) dp[i] += dp[i-2];
        dp[i] %= mod;
    }

    cout << dp[n] << endl;
    return 0;
}

