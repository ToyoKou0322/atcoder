#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ac = 0;
    int bc = 0;
    int cc = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] == 'A'){
            ac++;
        }else if(s[i] == 'B' && ac > bc){
            bc++;
        }else if(s[i] == 'C' && bc > cc){
            cc++;
        }
    }

    int ans = min(ac,bc);
    ans = min(ans,cc);
    cout << ans << endl;
    return 0;
}

