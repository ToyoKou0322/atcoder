#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    long long to;
    long long len;
};

long long n;
long long x;
vector<vector<Edge>> g;
bool ok = false;

void dfs(int v,int p,long long sum){
    if(sum == x){
        ok = true;
    }
    for(auto next : g[v]){
        if(next.to != p){
            dfs(next.to,v,sum + next.len);
            if(ok){
                return;
            }
        }
    }
}

int main(){
    cin >> n >> x;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        long long a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    for(int i=1;i <= n;i++){
        dfs(i,-1,0);
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

