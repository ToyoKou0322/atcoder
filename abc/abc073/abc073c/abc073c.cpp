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

    map<long long,bool> mp;

    for(int i=0;i < n;i++){
        mp[a[i]] = !mp[a[i]];
    }

    int ans = 0;
    for(auto x : mp){
        if(x.second){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

