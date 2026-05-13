#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    map<string,long long> mp;
    for(int i=0;i < n;i++){
        cin >> s[i];
        sort(s[i].begin(),s[i].end());
        mp[s[i]]++;
    }

    long long ans = 0;
    for(auto x : mp){
        if(x.second >= 2){
            ans += x.second*(x.second-1) / 2;
        }
    }

    cout << ans << endl;
    return 0;
}

