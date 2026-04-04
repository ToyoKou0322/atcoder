#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
vector<vector<int>> g;

int dfs(int v,int p){
    int sz = 1;
    for(auto next : g[v]){
        if(next != p){
            sz += dfs(next,v);
        }
    }
    return sz;
}

int main(){
    cin >> n;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int max_subtree = 0;
    for(auto next : g[1]){
        max_subtree = max(max_subtree,dfs(next,1));
    }

    cout << n - max_subtree << endl;
    return 0;
}

