#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> c(100000);
    for(int i=0;i < s.size();i++){
        c[s[i]]++;
    }

    int m = 0;
    for(int i=0;i < 100000;i++){
        m = max(m,c[i]);
    }

    string ans = "";
    for(int i=0;i < s.size();i++){
        if(c[s[i]] != m){
            ans += s[i];
        }
    }

    cout << ans << endl;
}

