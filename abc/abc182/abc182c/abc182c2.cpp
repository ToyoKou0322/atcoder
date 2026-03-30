#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    int ans = 100;
    bool able = false;
    for(int bit=1;bit < (1 << n);bit++){
        string t = "";
        int c = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                t += s[i];
                c++;
            }
        }
        if(stoll(t) % 3 == 0){
            able = true;
            ans = min(ans,n-c);
        }
    }
    if(!able){
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}

