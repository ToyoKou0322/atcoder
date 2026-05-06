#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int n;
map<long long,vector<long long>> g;
map<long long,bool> seen;
long long ans = 0;

void dfs(long long v){
    seen[v] = true;
    ans = max(ans,v);
    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next);
        }
    }
}

int main(){
    cin >> n;
    for(int i=0;i < n;i++){
        long long a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1);

    cout << ans << endl;
    return 0;
}

