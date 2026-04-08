#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Edge {
    long long to;
    long long cost;
};
int n,m;
vector<vector<Edge>> g;
vector<bool> seen;
long long ans = 0;

void dfs(int v,long long sum){
    seen[v] = true;
    ans = max(sum,ans);
    for(auto next : g[v]){
        if(!seen[next.to]){
            dfs(next.to,sum + next.cost);
        }
    }
    seen[v] = false;
}

int main(){
    cin >> n >> m;
    g.resize(n+1);
    for(int i=0;i < m;i++){
        long long a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }

    seen.assign(n+1,false);
    for(int i=1;i <= n;i++){
        dfs(i,0);
    }
    cout << ans << endl;
    return 0;
}

