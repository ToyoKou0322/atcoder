#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct UnionFind {
    int _n;
    vector<int> parent_or_size;
    int group_count;

    UnionFind(int n) : _n(n), parent_or_size(n, -1), group_count(n) {}

    int root(int x) {
        if (parent_or_size[x] < 0) return x;
        return parent_or_size[x] = root(parent_or_size[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (-parent_or_size[x] < -parent_or_size[y]) swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        group_count--;
        return true;
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int size(int x) {
        return -parent_or_size[root(x)];
    }

    // グラフ全体の連結成分の数を返す (O(1))
    int count() const {
        return group_count;
    }

    // すべての連結成分を2次元配列で返す (O(N))
    vector<vector<int>> groups() {
        vector<int> leader_buf(_n), group_size(_n);
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = root(i);
            group_size[leader_buf[i]]++;
        }
        vector<vector<int>> result(_n);
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            remove_if(result.begin(), result.end(),
                      [&](const vector<int>& v) { return v.empty(); }),
            result.end());
        return result;
    }
};


int main(){
    int n,m;
    cin >> n >> m;
    vector<int> u(m),v(m);
    UnionFind uf(n);
    for(int i=0;i < m;i++){
        cin >> u[i] >> v[i];
        u[i]--;
        v[i]--;
        uf.unite(u[i],v[i]);
    }

    cout << uf.count() << endl;

    return 0;
}

