#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m;
vector<vector<int>> g;
vector<bool> seen;
bool ok = true;

void dfs(int v,int p){
    seen[v] = true;
    for(auto next : g[v]){
        if(seen[next] && next != p){
            ok = false;
            return;
        }
        if(!seen[next]){
            dfs(next,v);
            if(!ok){
                return;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    g.resize(n+1);
    for(int i=0;i < m;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=1;i <= n;i++){
        if(g[i].size() > 2){
            cout << "No" << endl;
            return 0;
        }
    }

    seen.assign(n+1,false);
    dfs(1,-1);

    for(int i=1;i <= n;i++){
        if(!seen[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

