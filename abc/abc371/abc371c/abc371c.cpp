#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int n,mg,mh;
vector<vector<int>> g,h,a;

int main(){
    cin >> n;
    cin >> mg;
    g.resize(n+1);
    h.resize(n+1);
    for(int i=0;i < mg;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cin >> mh;
    for(int i=0;i < mh;i++){
        int x,y;
        cin >> x >> y;
        h[x].push_back(y);
        h[y].push_back(x);
    }
    a.resize(n+1,vector<int>(n+1,INT_MAX));
    for(int i=1;i <= n-1;i++){
        for(int j=i+1;j <= n;j++){
            cin >> a[i][j];
        }
    }

    vector<int> x(n+1);
    for(int i=1;i <= n;i++){
        x[i] = i;
    }

    long long ans = LLONG_MAX;
    do{
        long long tmp = 0;
        for(int i=1;i <= n;i++){
            for(int j=i+1;j <= n;j++){
                bool ok = false;
                for(int k=0;k < g[i].size();k++){
                    if(g[i][k] == j){
                        ok = true;
                    }
                }
                if(ok){
                    bool ok2 = false;
                    for(int k=0;k < h[x[i]].size();k++){
                        if(h[x[i]][k] == x[j]){
                            ok2 = true;
                        }
                    }
                    if(!ok2){
                        int u = min(x[i],x[j]);
                        int v = max(x[i],x[j]);
                        tmp += a[u][v];
                    }
                }else{
                    bool ok2 = false;
                    for(int k=0;k < h[x[i]].size();k++){
                        if(h[x[i]][k] == x[j]){
                            ok2 = true;
                        }
                    }
                    if(ok2){
                        int u = min(x[i],x[j]);
                        int v = max(x[i],x[j]);
                        tmp += a[u][v];
                    }
                }
            }
        }
        ans = min(ans,tmp);
    }while(next_permutation(x.begin()+1,x.end()));

    cout << ans << endl;
    return 0;
}

