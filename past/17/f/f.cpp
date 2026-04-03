#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<long long> p;
vector<string> s;
vector<vector<int>> children;
long long mod = 998244353;

long long dfs(int v) {
    if (children[v].size() == 0) {
        return stoll(s[v - 1]) % mod;
    } else {
        if (s[v - 1] == "+") {
            long long r = 0;
            for (auto next : children[v]) {
                r = (r + dfs(next)) % mod;
            }
            return r;
        } else {
            long long r = 1;
            for (auto next : children[v]) {
                r = (r * dfs(next)) % mod;
            }
            return r;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    p.resize(n);
    s.resize(n);
    children.resize(n + 1);

    for (int i = 1; i < n; i++) {
        cin >> p[i];
        children[p[i]].push_back(i + 1);
    }
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << dfs(1) << "\n";
    return 0;
}
