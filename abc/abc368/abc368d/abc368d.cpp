#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,k;
vector<vector<int>> g;
vector<bool> target;
vector<bool> y;
int x = 0;

void dfs(int v,int p){
    for(auto next : g[v]){
        if(next != p){
            dfs(next,v);
        }
    }

    bool ok = true;
    for(auto next : g[v]){
        if(next == p) continue;
        if(!y[next]){
            ok = false;
        }
    }
    if(ok && !target[v]){
        x++;
        y[v] = true;
    }
    
}

int main(){
    cin >> n >> k;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> v(k);
    target.assign(n+1,false);
    for(int i=0;i < k;i++){
        cin >> v[i];
        target[v[i]] = true;
    }

    y.assign(n+1,false);
    dfs(v[0],-1);

    cout << n - x << endl;
    return 0;

}

