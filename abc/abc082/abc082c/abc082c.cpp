#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long,long long> mp;
    for(int i=0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    long long ans = 0;
    for(auto x : mp){
        if(x.first > x.second){
            ans += x.second;
        }
        if(x.first < x.second){
            ans += x.second - x.first;
        }
    }

    cout << ans << endl;
    return 0;
}

