#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> connect(n+1,vector<bool>(n+1,false));
    for(int i=0;i < m;i++){
        int u,v;
        cin >> u >> v;
        connect[u][v] = true;
        connect[v][u] = true;
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        for(int j=i+1;j <= n;j++){
            for(int k=j+1;k <= n;k++){
                bool ok = true;
                if(!connect[i][j] || !connect[j][k] || !connect[k][i]){
                    ok = false;
                }
                if(ok){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

