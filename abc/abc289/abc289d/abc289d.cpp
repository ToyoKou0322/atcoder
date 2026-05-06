#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    vector<bool> mochi(100010);
    for(int i=0;i < m;i++){
        cin >> b[i];
        mochi[b[i]] = true;
    }
    int x;
    cin >> x;

    vector<bool> dp(x+1);
    dp[0] = true;

    for(int i=0;i < n;i++){
        dp[a[i]] = true;
    }

    for(int i=1;i <= x;i++){
        for(int j=0;j < n;j++){
            if(i - a[j] >= 0 && !mochi[i-a[j]] && dp[i-a[j]]){
                dp[i] = true;
            }
        }
    }

    if(dp[x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

