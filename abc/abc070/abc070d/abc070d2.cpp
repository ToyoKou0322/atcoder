#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Edge {
    long long to;
    long long cost;
};
int n,q,k;
vector<vector<Edge>> g;
long long ans = 0;
vector<long long> d;

void dfs(int v,int p,long long sum){
    d[v] = sum; 
    for(auto next : g[v]){
        if(next.to != p){
            dfs(next.to,v,sum + next.cost);
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
    cin >> q >> k;
    d.resize(n+1,0);
    dfs(k,-1,0);
    for(int i=0;i < q;i++){
        int x,y;
        cin >> x >> y;
        ans = d[x] + d[y];
        cout << ans << endl;
    }
}

