#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i=2;i < n;i++){
        int x = INT_MAX;
        for(int j=1;j <= min(k,i);j++){
            int a = abs(h[i-j]-h[i]) + dp[i-j];
            x = min(x,a);
        }
        dp[i] = x;
    }

    cout << dp[n-1] << endl;
    return 0;
}

