#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<long long>> a;
vector<long long> t,k;
vector<bool> seen;
long long ans = 0;

void dfs(int v){
    seen[v] = true;
    ans += t[v];
    for(auto next : a[v]){
        if(!seen[next]){
            dfs(next);
        }
    }
}

int main(){
    int n;
    cin >> n;
    t.resize(n+1);
    k.resize(n+1);
    a.resize(n+1);
    for(int i=1;i <= n;i++){
        cin >> t[i] >> k[i];
        for(int j=0;j < k[i];j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    
    seen.assign(n+1,false);

    dfs(n);

    cout << ans << endl;
    return 0;
}

