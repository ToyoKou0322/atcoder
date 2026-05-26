#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a;

    int x = 1;
    while(x <= 100000){
        x *= 6;
        a.push_back(x);
    }

    int y = 1;
    while(y <= 100000){
        y *= 9;
        a.push_back(y);
    }

    a.push_back(1);

    sort(a.begin(),a.end());

    vector<long long> dp(n+1,LLONG_MAX);
    dp[0] = 0;

    for(int i=0;i <= n;i++){
        if(dp[i] == LLONG_MAX) continue;

        for(int j=0;j < a.size();j++){
            int next = i + a[j];

            if(next <= n){
                dp[next] = min(dp[next],dp[i] + 1);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}

