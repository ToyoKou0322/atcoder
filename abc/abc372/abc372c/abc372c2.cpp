#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    auto is_abc = [&](int idx){
        if(idx < 0 || idx > n-3){
            return 0;
        }
        if(s[idx] == 'A' && s[idx+1] == 'B' && s[idx+2] == 'C'){
            return 1;
        }
        return 0;
    };

    int ans = 0;
    for(int i=0;i <= n-3;i++){
        ans += is_abc(i);
    }

    while(q--){
        int x;
        char c;
        cin >> x >> c;
        x--;

        ans -= is_abc(x-2);
        ans -= is_abc(x-1);
        ans -= is_abc(x);

        s[x] = c;

        ans += is_abc(x-2);
        ans += is_abc(x-1);
        ans += is_abc(x);

        cout << ans << endl;
    }

    return 0;
}

