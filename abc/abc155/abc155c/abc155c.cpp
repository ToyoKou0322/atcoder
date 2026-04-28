#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    map<string,int> mp;
    int mx = 0;
    for(int i=0;i < n;i++){
        cin >> s[i];
        mp[s[i]]++;
        mx = max(mx,mp[s[i]]);
    }

    for(auto x : mp){
        if(x.second == mx){
            cout << x.first << endl;
        }
    }

    return 0;
}

