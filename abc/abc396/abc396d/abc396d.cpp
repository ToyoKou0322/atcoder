#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge {
    long long to;
    long long cost;
};

int n,m;
vector<vector<Edge>> g;
vector<bool> seen;
long long ans = LLONG_MAX;

void dfs(int v,long long current_xor){
    if(v == n){
        ans = min(ans,current_xor);
        return;
    }

    for(auto next : g[v]){
        if(!seen[next.to]){
            seen[next.to] = true;
            dfs(next.to,current_xor ^ next.cost);
            seen[next.to] = false;
        }
    }
}

int main(){
    cin >> n >> m;
    g.resize(n+1);
    for(int i=0;i < m;i++){
        long long u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    seen.assign(n+1,false);
    seen[1] = true;
    dfs(1,0);

    cout << ans << endl;
    return 0;
}

