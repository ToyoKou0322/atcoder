#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    s = "0" + s;

    int max_state = (1 << n) - 1;
    vector<bool> dp(max_state + 1, false);
    dp[0] = true;

    for(int i=1;i <= max_state;i++){
        if(s[i] == '1'){
            dp[i] = false;
            continue;
        }

        bool reachable = false;
        for(int j=0;j < n;j++){
            if((i >> j) & 1){
                int prev_state = i ^ (1 << j);

                if(dp[prev_state]){
                    reachable = true;
                    break;
                }
            }
        }
        dp[i] = reachable;
    }

    if(dp[max_state]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i < t;i++){
        solve();
    }
    return 0;
}

