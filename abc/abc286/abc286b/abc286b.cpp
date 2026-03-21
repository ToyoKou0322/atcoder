#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    char pre = s[0];
    for(int i=0;i < n;i++){
        if(pre == 'n' && s[i] == 'a'){
            ans += 'y';
        }
        ans += s[i];
        pre = s[i];
    }

    cout << ans << endl;
    return 0;
}

