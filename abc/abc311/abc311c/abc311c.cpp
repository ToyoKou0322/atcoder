#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
vector<vector<int>> g;
vector<bool> seen;
vector<int> ans;
bool ok = false;
int x = -1;

void dfs(int v){
    seen[v] = true;
    for(auto next : g[v]){
        if(seen[next]){
            ok = true;
            x = next;
            ans.push_back(v);
            return;
        }
        if(!seen[next]){
            dfs(next);
            if(ok && x != -1){
                ans.push_back(v);
                if(v == x){
                    x = -1;
                }
            }
        }
    }
}

int main(){
    cin >> n;
    g.resize(n+1);
    for(int i=1;i <= n;i++){
        int a;
        cin >> a;
        g[i].push_back(a);
    }

    seen.assign(n+1,false);
    for(int i=1;i <= n;i++){
        if(ok){
            break;
        }
        if(seen[i]) continue;
        dfs(i);
    }

    reverse(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

