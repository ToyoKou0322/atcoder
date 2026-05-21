#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;

    map<char,int> mp;
    for(int i=0;i < s.size();i++){
        mp[s[i]]++;
    }

    for(auto x : mp){
        if(x.second % 2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

