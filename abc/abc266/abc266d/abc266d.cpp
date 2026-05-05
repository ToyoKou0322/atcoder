#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> t(n),x(n),a(n);
    vector<vector<long long>> snuke(100100,vector<long long>(5,0));
    for(int i=0;i < n;i++){
        cin >> t[i] >> x[i] >> a[i];
        snuke[t[i]][x[i]] = a[i];
    }

    vector<vector<long long>> dp(100100,vector<long long>(5,-1));
    dp[0][0] = 0;

    for(int i=1;i <= 100000;i++){
        for(int j=0;j < 5;j++){
            long long x = dp[i-1][j];
            if(j >= 1){
                x = max(x,dp[i-1][j-1]);
            }
            if(j <= 3){
                x = max(x,dp[i-1][j+1]);
            }
            if(x == -1) continue;

            dp[i][j] = x + snuke[i][j];
        }
    }

    long long ans = 0;
    for(int i=0;i < 5;i++){
        ans = max(ans,dp[100000][i]);
    }

    cout << ans << endl;
    return 0;
}
