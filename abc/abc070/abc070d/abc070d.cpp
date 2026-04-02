#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Edge {
    long long to;
    long long cost;
};

int n;
int k;
vector<vector<Edge>> g;
vector<bool> seen;
vector<long long> d;

void dfs(int v,long long sum){
    seen[v] = true;
    d[v] = min(d[v],sum);

    for(auto next : g[v]){
        if(!seen[next.to]){
            dfs(next.to,sum + next.cost);
        }
    }
}

int main(){
    cin >> n;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        long long a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }

    int q;
    cin >> q >> k;
    d.assign(n+1,LLONG_MAX);
    seen.assign(n+1,false);
    dfs(k,0);
    while(q--){
        int x,y;
        cin >> x >> y;
        long long ans = d[x] + d[y];
        cout << ans << endl;
    }
}

