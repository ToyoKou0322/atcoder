#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int n;
vector<set<int>> g;
vector<bool> seen;
vector<int> ans;

void dfs(int v){
    seen[v] = true;
    ans.push_back(v);

    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next);
            ans.push_back(v);
        }
    }
}

int main(){
    cin >> n;
    g.resize(n+1);
    seen.assign(n+1,false);
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    dfs(1);

    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }

}

