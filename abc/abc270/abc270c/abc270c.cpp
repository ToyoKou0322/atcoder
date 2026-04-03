#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,x,y;
vector<vector<int>> g;
vector<int> ans;
bool ok = false;

void dfs(int v,int p){
    ans.push_back(v);
    if(v == y){
        ok = true;
        return;
    }
    for(auto next : g[v]){
        if(next != p){
            dfs(next,v);
            if(ok){
                return;
            }
            ans.pop_back();
        }
    }
}

int main(){
    cin >> n >> x >> y;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(x,-1);

    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}

