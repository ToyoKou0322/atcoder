#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> c(m);
    vector<vector<int>> a(m);
    vector<char> r(m);
    for(int i=0;i < m;i++){
        cin >> c[i];
        for(int j=0;j < c[i];j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
        cin >> r[i];
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        vector<bool> truekey(n,false);
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                truekey[i] = true;
            }
        }

        bool ok = true;
        for(int i=0;i < m;i++){
            int count = 0;
            for(int j=0;j < c[i];j++){
                if(truekey[a[i][j]-1]){
                    count++;
                }
            }
            if(count >= k){
                if(r[i] == 'x'){
                    ok = false;
                }
            }else{
                if(r[i] == 'o'){
                    ok = false;
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

