#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long h,n;
    cin >> h >> n;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    vector<long long> dp(h+1,LLONG_MAX);
    dp[0] = 0;

    for(int i=0;i < h;i++){
        if(dp[i] == LLONG_MAX) continue;
        for(int j=0;j < n;j++){
            int next = min(h,i + a[j]);
            dp[next] = min(dp[next],dp[i] + b[j]);
        }
    }

    cout << dp[h] << endl;
    return 0;
}

