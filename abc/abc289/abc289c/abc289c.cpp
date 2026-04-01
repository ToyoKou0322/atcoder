#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> c(m);
    vector<vector<int>> a(m);
    for(int i=0;i < m;i++){
        cin >> c[i];
        for(int j=0;j < c[i];j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    int ans = 0;
    for(int bit=1;bit < (1 << m);bit++){
        vector<bool> num(n,false);
        for(int i=0;i < m;i++){
            if(bit & (1 << i)){
                for(int j=0;j < c[i];j++){
                    num[a[i][j]-1] = true;
                }
            }
        }
        bool ok = true;
        for(int i=0;i < n;i++){
            if(!num[i]){
                ok = false;
            }
        }
        if(ok){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

