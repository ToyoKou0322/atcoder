#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> g;
vector<long long> h;
vector<bool> seen;


bool dfs(int v){
    seen[v] = true;

    for(auto next : g[v]){
        if(h[next] >= h[v]) return false;
        if(!seen[next] && !dfs(next)){
            return false;
        }
    }

    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    h.resize(n+1);
    for(int i=1;i <= n;i++){
        cin >> h[i];
    }

    g.resize(n+1);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    seen.assign(n+1,false);
    long long ans = 0;
    for(int i=1;i <= n;i++){
        if(seen[i]) continue;
        if(dfs(i)) ans++;
    }

    cout << ans << endl;
    return 0;
}

