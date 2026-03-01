#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v){
    seen[v] = true;

    for(auto next_v : G[v]){
        if(seen[next_v]){
            continue;
        }
        dfs(G, next_v);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    Graph g(n+1);
    for(int i=0;i < m;i++){
        int u,v;
        cin  >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    seen.assign(n+1,false);
    int c = 0;
    for(int i=1;i <= n;i++){
        if(!seen[i]){
            c++;
            dfs(g,i);
        }
    }

    cout << m - (n-c) << endl;
    return 0;
}

