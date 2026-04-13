#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> x(n),y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;

    map<long long,pair<long long,long long>> mp;
    for(int i=0;i < n;i++){
        if(mp.count(y[i]) == 0){
            mp[y[i]] = {LLONG_MAX,0};
        }
        if(s[i] == 'R'){
            mp[y[i]].first = min(x[i],mp[y[i]].first);
        }else if(s[i] == 'L'){
            mp[y[i]].second = max(x[i],mp[y[i]].second);
        }
    }

    for(auto k : mp){
        if(k.second.first < k.second.second){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

