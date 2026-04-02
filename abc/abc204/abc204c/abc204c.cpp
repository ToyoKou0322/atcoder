#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m;
vector<vector<int>> g;
vector<bool> seen;
int ans = 0;

void dfs(int v){
    seen[v] = true;
    ans++;

    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next);
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
    }

    for(int i=1;i <= n;i++){
        seen.assign(n+1,false);
        dfs(i);
    }

    cout << ans << endl;
    return 0;
}

