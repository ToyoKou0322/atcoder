#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m;
vector<int> a,b;
vector<vector<int>> g;
vector<bool> seen;
vector<int> x;
bool ok = true;

void dfs(int v,int c){
    seen[v] = true;
    x[v] = c;

    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next,c ^ 1);
        }else{
            if(x[next] != (c ^ 1)){
                ok = false;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    g.resize(n+1);
    a.resize(m);
    b.resize(m);
    for(int i=0;i < m;i++){
        cin >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    for(int i=0;i < m;i++){
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    seen.assign(n+1,false);
    x.assign(n+1,-1);
    for(int i=1;i <= n;i++){
        if(seen[i]) continue;
        dfs(i,1);
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

