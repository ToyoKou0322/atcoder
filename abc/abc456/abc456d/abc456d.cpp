#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long mod = 998244353;

    vector<long long> dp(3);

    for(char c : s){
        int x = c - 'a';

        long long new_add = 1;

        for(int i=0;i < 3;i++){
            if(i != x){
                new_add = (new_add + dp[i]) % mod;
            }
        }

        dp[x] = (dp[x] + new_add) % mod;
    }

    long long ans = (dp[0] + dp[1] + dp[2]) % mod;

    cout << ans << endl;
    return 0;

}

