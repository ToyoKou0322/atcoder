#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    vector<vector<bool>> dp(n+1,vector<bool>(x+1000));
    dp[0][0] = true;
    for(int i=1;i <= n;i++){
        for(int j=0;j <= x;j++){
            if(dp[i-1][j]){
                dp[i][j+a[i-1]] = true;
                dp[i][j+b[i-1]] = true;
            }
        }
    }

    if(dp[n][x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

