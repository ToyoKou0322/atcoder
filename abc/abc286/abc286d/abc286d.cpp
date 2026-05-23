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

    vector<int> w;
    for(int i=0;i < n;i++){
        for(int j=0;j < b[i];j++){
            w.push_back(a[i]);
        }
    }

    int w_size = w.size();

    vector<vector<bool>> dp(w_size + 1,vector<bool>(100000));
    dp[0][0] = true;
    for(int i=1;i <= w_size;i++){
        for(int j=0;j <= x;j++){
            if(dp[i-1][j]){
                dp[i][j] = true;
                dp[i][j+w[i-1]] = true;
            }
        }
    }

    if(dp[w_size][x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

