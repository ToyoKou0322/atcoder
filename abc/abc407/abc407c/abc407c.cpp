#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long ans = 0;
    long long add = 0;
    while(!s.empty()){
        ans += ((s.back() - '0') + (10 - (ans % 10))) % 10;
        add++;
        s.pop_back();
    }

    ans += add;

    cout << ans << endl;
    return 0;
}

