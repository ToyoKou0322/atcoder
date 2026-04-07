#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long n,k;
vector<vector<int>> t;
vector<bool> seen;
int ans = 0;

void dfs(int v,long long time){
    seen[v] = true;
    bool ok = true;
    for(int i=1;i <= n;i++){
        if(!seen[i]){
            dfs(i,time + t[v][i]);
            ok = false;
        }
    }
    if(ok){
        if(time + t[v][1] == k){
            ans++;
        }
    }
    seen[v] = false;
}

int main(){
    cin >> n >> k;
    t.resize(n+2,vector<int>(n+2));
    for(int i=1;i <= n;i++){
        for(int j=1;j <= n;j++){
            cin >> t[i][j];
        }
    }

    seen.assign(n+1,false);
    dfs(1,0);
    cout << ans << endl;
    return 0;
}

