#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,x;
vector<int> h;
vector<vector<int>> g;
int ans = 0;

bool dfs(int v,int p){
    bool has_gem = (h[v] == 1);
    for(auto next : g[v]){
        if(next != p){
            if(dfs(next,v)){
                ans += 2;
                has_gem = true;
            }
        }
    }

    return has_gem;
}

int main(){
    cin >> n >> x;
    h.resize(n+1);
    for(int i=1;i <= n;i++){
        cin >> h[i];
    }
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(x,-1);
    cout << ans << endl;
    return 0;
}

