#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<long long> dp(3);

    long long mod = 998244353;

    for(auto c : s){
        int x = c - 'a';
        dp[x]++;
        for(int i=0;i < 3;i++){
            if(x == i) continue;
            dp[x] += dp[i];
            dp[x] %= mod;
        }
    }

    cout << (dp[0] + dp[1] + dp[2]) % mod << endl;
    return 0;
}

