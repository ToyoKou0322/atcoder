#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;

    map<char,long long> count;
    for(int i=0;i < s.size();i++){
        count[s[i]]++;
    }

    long long n = s.size();
    long long ans = n * (n-1) / 2;

    bool same = false;
    for(auto x : count){
        ans -= x.second * (x.second - 1) / 2;
        if(x.second > 1){
            same = true;
        }
    }

    if(same){
        ans++;
    }

    cout << ans << endl;
    return 0;
}

