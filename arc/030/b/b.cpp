#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,x;
vector<int> h;
vector<vector<int>> g;
vector<bool> y;
int ans = 0;

void dfs(int v,int p){
    for(auto next : g[v]){
        if(next != p){
            ans++;
            dfs(next,v);
            if(y[next]){
                ans++;
                y[v] = true;
            }else{
                ans--;
            }
        }
    }
    
    if(h[v-1] == 1){
        y[v] = true;
    }
}

int main(){
    cin >> n >> x;
    g.resize(n+1);
    h.resize(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    y.assign(n+1,false);
    dfs(x,-1);
    cout << ans << endl;
    return 0;
}

