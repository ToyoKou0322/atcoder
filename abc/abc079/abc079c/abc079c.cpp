#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int bit=0;bit < (1 << 3);bit++){
        int x = s[0] - '0';
        bool ab = false;
        bool bc = false;
        bool cd = false;
        string ans = "";
        ans += s[0];
        for(int i=0;i < 3;i++){
            if(bit & (1 << i)){
                if(i == 0){
                    ab = true;
                }else if(i == 1){
                    bc = true;
                }else{
                    cd = true;
                }
            }
        }
        if(ab){
            x += s[1] - '0';
            ans += '+';
        }else{
            x -= s[1] - '0';
            ans += '-';
        }
        ans += s[1];
        if(bc){
            x += s[2] - '0';
            ans += '+';
        }else{
            x -= s[2] - '0';
            ans += '-';
        }
        ans += s[2];
        if(cd){
            x += s[3] - '0';
            ans += '+';
        }else{
            x -= s[3] - '0';
            ans += '-';
        }
        ans += s[3];
        ans += "=7";

        if(x == 7){
            cout << ans << endl;
            return 0;
        }
    }
}

