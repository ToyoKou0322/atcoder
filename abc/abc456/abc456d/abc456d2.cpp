#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long mod = 998244353;

    vector<long long> dp(3);

    for(int i=0;i < s.size();i++){
        int x = s[i] - 'a';

        long long add = 1;
        for(int j=0;j < 3;j++){
            if(j != x){
                add += dp[j] % mod;
            }
        }

        dp[x] += add % mod;
    }

    long long ans = (dp[0] + dp[1] + dp[2]) % mod;

    cout << ans << endl;
    return 0;
}

