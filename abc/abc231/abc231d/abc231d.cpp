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
        if(next != p && seen[next]){
            ok = false;
            return;
        }
        if(!seen[next]){
            dfs(next,v);
        }
    }
}

int main(){
    cin >> n >> m;
    g.resize(n+1);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i < n+1;i++){
        if(g[i].size() >= 3){
            cout << "No" << endl;
            return 0;
        }
    }

    seen.assign(n+1,false);
    for(int i=1;i <= n;i++){
        if(!ok) break;
        if(seen[i]) continue;
        dfs(i,-1);
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

