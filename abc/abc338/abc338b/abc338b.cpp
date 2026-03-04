#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> m;
    for(int i=0;i < s.size();i++){
        m[s[i]] = 0;
    }
    for(int i=0;i < s.size();i++){
        m[s[i]]++;
    }

    int mx = 0;
    for(auto x : m){
        mx = max(x.second,mx);
    }
    for(auto x : m){
        if(x.second == mx){
            cout << x.first << endl;
            return 0;
        }
    }
}

