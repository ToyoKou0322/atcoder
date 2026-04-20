#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> g;
vector<bool> seen;
int ans = 0;

void dfs(int v){
    seen[v] = true;
    if(v == 2){
        return;
    }
    for(auto next : g[v]){
        if(!seen[next]){
            ans++;
            dfs(next);
        }
    }
}

int main(){
    int n;
    cin >> n;
    g.resize(n+1);
    for(int i=1;i <= n;i++){
        int a;
        cin >> a;
        g[i].push_back(a);
    }

    seen.assign(n+1,false);
    dfs(1);
    if(seen[2]){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}

