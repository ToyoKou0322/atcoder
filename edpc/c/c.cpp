#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> h(n,vector<int>(3));
    for(int i=0;i < n;i++){
        for(int j=0;j < 3;j++){
            cin >> h[i][j];
        }
    }

    vector<vector<int>> dp(n,vector<int>(3));
    dp[0][0] = h[0][0];
    dp[0][1] = h[0][1];
    dp[0][2] = h[0][2];
    for(int i=1;i < n;i++){
        for(int j=0;j < 3;j++){
            int x = 0;
            for(int k=0;k < 3;k++){
                if(j == k) continue;
                x = max(h[i][j] + dp[i-1][k],x);
            }
            dp[i][j] = x;
        } 
    }
    
    int ans = 0;
    for(int i=0;i < 3;i++){
        ans = max(dp[n-1][i],ans);
    }

    cout << ans << endl;
    return 0;
}

