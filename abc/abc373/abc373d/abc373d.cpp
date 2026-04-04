#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Edge {
    long long to;
    long long weight;
};

int n,m;
vector<vector<Edge>> g;
vector<bool> seen;
vector<long long> ans;

void dfs(int v,long long x){
    seen[v] = true;
    ans[v] = x;
    for(auto next : g[v]){
        if(!seen[next.to]){
            dfs(next.to,next.weight + x);
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
        g[v].push_back({u,-w});
    }

    seen.assign(n+1,false);
    ans.assign(n+1,-1);
    for(int i=1;i <= n;i++){
        if(seen[i]) continue;
        dfs(i,0);
    }

    for(int i=1;i <= n;i++){
        cout << ans[i] << " ";
    }
}

