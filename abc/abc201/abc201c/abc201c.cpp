#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i=0;i <= 9999;i++){
        string t = to_string(i);
        t = string(4-t.size(),'0') + t;

        bool ok = true;
        for(int j=0;j < s.size();j++){
            if(s[j] == 'o'){
                bool exists = false;
                for(int k=0;k < t.size();k++){
                    if(t[k] == j + '0'){
                        exists = true;
                    }
                }
                if(!exists){
                    ok = false;
                    break;
                }
            }else if(s[j] == 'x'){
                bool x = false;
                for(int k=0;k < t.size();k++){
                    if(t[k] == j + '0'){
                        ok = false;
                    }
                }
            }
        }
        if(ok){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

