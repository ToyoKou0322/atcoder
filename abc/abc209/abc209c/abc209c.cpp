#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }

    long long mod = 1e9+7;
    long long ans = 1;
    sort(c.begin(),c.end());
    for(int i=0;i < n;i++){
        ans *= max(0,c[i]-i);
        ans %= mod;
    }

    cout << ans << endl;
}

