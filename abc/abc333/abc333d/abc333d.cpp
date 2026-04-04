#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int n;
vector<vector<int>> g;
int ans = INT_MAX;
int x = 0;
vector<int> c;

void dfs(int v,int p){
    x++;
    for(auto next : g[v]){
        if(next != p){
            dfs(next,v);
            if(v == 1){
                c.push_back(x);
                x = 1;
            }
        }
    }
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

    dfs(1,-1);
    sort(c.begin(),c.end());
    ans = n - (c.back() - 1);

    cout << ans << endl;
    return 0;
}

