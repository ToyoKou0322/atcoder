#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> g;
vector<bool> seen;
bool is_tree;

void dfs(int v, int p) {
    seen[v] = true;
    
    for (auto next : g[v]) {
        if (next == p) continue;
        
        if (seen[next]) {
            is_tree = false;
        } else {
            dfs(next, v);
        }
    }
}

int main() {
    cin >> n >> m;
    g.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    seen.assign(n + 1, false);
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (seen[i]) continue;
        
        is_tree = true;
        dfs(i, -1);
        
        if (is_tree) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
