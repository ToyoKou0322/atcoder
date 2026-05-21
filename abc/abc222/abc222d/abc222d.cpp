#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    long long mod = 998244353;
    long long MAX_VAL = 3000;

    vector<vector<long long>> dp(n+1,vector<long long>(MAX_VAL+5,0));

    dp[0][0] = 1;

    for(int i=1;i <= n;i++){
        int ai = a[i-1];
        int bi = b[i-1];

        vector<long long> s(MAX_VAL+5,0);
        s[0] = dp[i-1][0];
        for(int j=1;j <= MAX_VAL;j++){
            s[j] = (s[j-1] + dp[i-1][j]) % mod;
        }

        for(int j=ai;j <= bi;j++){
            dp[i][j] = s[j];
        }
    }

    long long ans = 0;
    for(int i=0;i <= MAX_VAL;i++){
        ans = (ans + dp[n][i]) % mod;
    }

    cout << ans << endl;
    return 0;
}

