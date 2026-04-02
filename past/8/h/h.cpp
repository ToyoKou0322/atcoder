#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int to;
    int cost;
};

int n;
long long x;
vector<vector<Edge>> g;
vector<bool> seen;
bool ok = false;

void dfs(int v,long long sum){
    if(ok){
        return;
    }
    seen[v] = true;
    if(sum == x){
        ok = true;
        return;
    }

    for(auto next : g[v]){
        if(!seen[next.to]){
            dfs(next.to,sum + next.cost);
        }
    }
}

int main(){
    cin >> n >> x;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }

    for(int i=1;i <= n;i++){
        if(ok){
            break;
        }
        seen.assign(n+1,false);
        dfs(i,0);
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

