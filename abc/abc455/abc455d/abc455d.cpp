#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> g;
vector<bool> seen;
vector<int> where;
vector<int> ans;
int rt = -1;

void dfs(int v,int c){
    seen[v] = true;
    if(where[v] < 0){
        rt = -where[v];
    }
    bool ok = false;
    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next,c+1);
            ok = true;
        }
    }
    if(!ok){
        ans[rt] = c;
    }
}

int main(){
    long long n,q;
    cin >> n >> q;

    where.resize(n+1);
    for(int i=1;i <= n;i++){
        where[i] = -i;
    }

    vector<bool> top(n+1,true);

    ans.resize(n+1,0);
    g.resize(n+1);
    while(q--){
        long long c,p;
        cin >> c >> p;
        if(where[c] >= 1){
            top[where[c]] = true;
        }
        top[p] = false;
        where[c] = p;
        if(g[c].size() == 1){
            g[c].pop_back();
        }
        g[c].push_back(p);
    }

    seen.assign(n+1,false);
    for(int i=1;i <= n;i++){
        if(seen[i] || !top[i]) continue;
        rt = -1;
        dfs(i,1);
    }

    for(int i=1;i <= n;i++){
        cout << ans[i] << " ";
    }

}

