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

    vector<vector<bool>> dp(n+1,vector<bool>(100000,false));
    dp[0][0] = true;

    for(int i=0;i < n;i++){
        for(int j=0;j <= x;j++){
            if(dp[i][j]){
                dp[i+1][j+a[i]] = true;
                dp[i+1][j+b[i]] = true;
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

