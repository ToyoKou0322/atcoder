#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<long long> x(3);
    long long n = 0;
    for(int i=0;i < 3;i++){
        cin >> x[i];
        n += x[i];
    }

    long long mod = 998244353;

    vector<vector<tuple<long long,long long,long long,long long>>> dp(n+1,vector<tuple<long long,long long,long long,long long>>(3));
    dp[1][0] = {1,1,0,0};
    dp[1][1] = {1,0,1,0};
    dp[1][2] = {1,0,0,1};
    for(int i=2;i <= n;i++){
        dp[i][0] = {get<0>(dp[i-1][0]) + get<0>(dp[i-1][1]),get<1>(dp[i-1][0]) + get<1>(dp[i-1][1]), get<2>(dp[i-1][0]) + get<2>(dp[i-1][1]),get<3>(dp[i-1][0]) + get<3>(dp[i-1][1])};
        dp[i][1] = {get<0>(dp[i-1][0]) + get<0>(dp[i-1][1]) + get<0>(dp[i-1][2]),get<1>(dp[i-1][2]) + get<1>(dp[i-1][0]) + get<1>(dp[i-1][1]),get<2>(dp[i-1][2]) + get<2>(dp[i-1][0]) + get<2>(dp[i-1][1]),get<3>(dp[i-1][0]) + get<3>(dp[i-1][1]) + get<3>(dp[i-1][2])};
        dp[i][2] = {get<0>(dp[i-1][1]) + get<0>(dp[i-1][2]),get<1>(dp[i-1][1]) + get<1>(dp[i-1][2]), get<2>(dp[i-1][1]) + get<2>(dp[i-1][2]),get<3>(dp[i-1][1]) + get<3>(dp[i-1][2])};

        get<0>(dp[i][0]) %= mod;
        get<0>(dp[i][1]) %= mod;
        get<0>(dp[i][2]) %= mod;
    }
}

