#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> g;
vector<vector<int>> seen;
bool ok = false;
vector<string> s;
int w;

void dfs(int v,int day){
    seen[v][day] = 1;
    for(auto next : g[v]){
        if(seen[next][(day+1)%w] == 1 && s[next][(day+1)%w] == 'o'){
            ok = true;
            return;
        }
        if(seen[next][(day+1)%w] == 0 && s[next][(day+1)%w] == 'o'){
            dfs(next,(day+1)%w);
            if(ok){
                return;
            }
        }
    }

    seen[v][day] = 2;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;
        g.assign(n+1,{});
        for(int i=1;i <= n;i++){
            g[i].push_back(i);
        }
        for(int i=0;i < m;i++){
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cin >> w;
        s.assign(n+1,"");
        for(int i=1;i <= n;i++){
            cin >> s[i];
        }

        seen.assign(n+1,vector<int>(w,0));
        ok = false;
        for(int i=1;i <= n;i++){
            if(s[i][0] == 'o'){
                dfs(i,0);
                if(ok){
                    break;
                }
            }
        }

        if(ok){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}

