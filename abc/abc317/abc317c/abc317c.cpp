#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int to;
    long long cost;
};

int N, M;
vector<vector<Edge>> G;
vector<bool> visited;
long long ans = 0;

void dfs(int v, long long sum) {
    ans = max(ans, sum);
    
    visited[v] = true;

    for (auto e : G[v]) {
        if (!visited[e.to]) {
            dfs(e.to, sum + e.cost);
        }
    }

    visited[v] = false;
}

int main() {
    cin >> N >> M;
    
    G.resize(N + 1);
    visited.assign(N + 1, false);

    for (int i = 0; i < M; ++i) {
        int u, v;
        long long c;
        cin >> u >> v >> c;
        G[u].push_back({v, c});
        G[v].push_back({u, c});
    }

    for (int i = 1; i <= N; ++i) {
        dfs(i, 0);
    }

    cout << ans << endl;

    return 0;
}
