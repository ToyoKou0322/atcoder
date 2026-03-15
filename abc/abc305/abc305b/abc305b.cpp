#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    char p,q;
    cin >> p >> q;
    string s = "AXXBCXXXDEXXXXFXXXXXXXXG";

    int x = -1;
    int y = -1;
    for(int i=0;i < s.size();i++){
        if(s[i] == p){
            x = i;
        }
        if(s[i] == q){
            y = i;
        }
    }

    int ans = abs(x-y);
    cout << ans << endl;
}

