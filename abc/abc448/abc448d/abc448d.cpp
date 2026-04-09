#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int n;
vector<long long> a;
vector<vector<int>> g;
map<long long,long long> mp;
vector<bool> ok;

void dfs(int v,int p){
    mp[a[v]]++;
    if(mp[a[v]] > 1){
        ok[v] = true;
    }
    for(auto next : g[v]){
        if(next != p){
            if(ok[v]){
                ok[next] = true;
            }
            dfs(next,v);
        }
    }
    mp[a[v]]--;
}

int main(){
    cin >> n;
    a.resize(n+1);
    for(int i=1;i <= n;i++){
        cin >> a[i];
    }
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ok.assign(n+1,false);
    dfs(1,-1);
    for(int i=1;i <= n;i++){
        if(ok[i]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}

