#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    string s;
    cin >> s;

    map<char,int> m;

    for(int i=l;i <= r;i++){
        m[s[i]]++;
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        ans += m[s[i]];
        m[s[l]]--;
        l = min(n,l+1);
        r = min(n,r+1);
        m[s[r]]++;
    }

    cout << ans << endl;
    return 0;
}

