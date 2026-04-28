#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;

    map<char,char> mp;
    for(char i='a';i <= 'z';i++){
        mp[i] = i;
    }

    while(q--){
        char c,d;
        cin >> c >> d;
        for(auto x : mp){
            if(x.second == c){
                mp[x.first] = d;
            }
        }
    }

    for(int i=0;i < n;i++){
        if(mp.find(s[i]) != mp.end()){
            cout << mp[s[i]];
        }else{
            cout << s[i];
        }
    }

    cout << endl;
    return 0;

}

