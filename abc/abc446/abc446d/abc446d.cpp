#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    map<long long,long long> dp;
    for(int i=0;i < n;i++){
        if(dp.count(a[i]-1)){
            dp[a[i]] = dp[a[i]-1] + 1;
        }else{
            dp[a[i]] = 1;
        }
    }

    long long ans = 0;
    for(auto x : dp){
        ans = max(x.second,ans);
    }

    cout << ans << endl;
    return 0;
}

