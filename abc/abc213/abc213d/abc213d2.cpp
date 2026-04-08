#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
vector<vector<int>> g;
vector<int> ans;

void dfs(int v,int p){
    ans.push_back(v);
    for(auto next : g[v]){
        if(next != p){
            dfs(next,v);
            ans.push_back(v);
        }
    }
}

int main(){
    cin >> n;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i <= n;i++){
        sort(g[i].begin(),g[i].end());
    }

    dfs(1,-1);

    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

