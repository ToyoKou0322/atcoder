#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    int sum = 0;
    for(int i=0;i < n;i++){
        cin >> t[i];
        sum += t[i];
    }

    vector<vector<bool>> dp(n+1,vector<bool>(sum+1));
    dp[0][0] = true;
    for(int i=1;i <= n;i++){
        for(int j=0;j <= sum;j++){
            if(dp[i-1][j]){
                dp[i][j] = true;
                dp[i][j+t[i-1]] = true;
            }
        }
    }

    int x = (sum + 1) / 2;
    for(int i=x;i <= sum;i++){
        if(dp[n][i]){
            cout << i << endl;
            return 0;
        }
    }
}

