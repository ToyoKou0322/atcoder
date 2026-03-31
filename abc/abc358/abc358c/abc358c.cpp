#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    int ans = INT_MAX;
    for(int bit=0;bit < (1 << n);bit++){
        vector<bool> a(m,false);
        int c = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                c++;
                for(int j=0;j < m;j++){
                    if(s[i][j] == 'o'){
                        a[j] = true;
                    }
                }
            }
        }
        bool ok = true;
        for(int i=0;i < m;i++){
            if(!a[i]){
                ok = false;
            }
        }
        if(ok){
            ans = min(ans,c);
        }
    }

    cout << ans << endl;
    return 0;
}

