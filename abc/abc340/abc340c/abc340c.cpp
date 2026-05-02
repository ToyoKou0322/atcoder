#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<long long,long long> memo;

long long solve(long long x){
    if(x <= 1){
        return 0;
    }

    if(memo.count(x)){
        return memo[x];
    }

    long long val = x + solve(x/2) + solve((x+1)/2);

    memo[x] = val;

    return memo[x];
}

int main(){
    long long n;
    cin >> n;

    long long ans = solve(n);

    cout << ans << endl;
    return 0;
}

