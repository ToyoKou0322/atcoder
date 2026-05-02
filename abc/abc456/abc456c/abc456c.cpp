#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long mod = 998244353;

    char pre = '.';
    long long ans = 0;
    long long c = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] == pre){
            ans += c * (c+1) / 2;
            ans %= mod;
            c = 0;
        }
        c++;
        pre = s[i];
    }

    ans += c * (c+1) / 2;
    ans %= mod;

    cout << ans << endl;
}

