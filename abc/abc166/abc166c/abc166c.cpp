#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> h(n+1);
    for(int i=1;i <= n;i++){
        cin >> h[i];
    }
    vector<vector<int>> g(n+1);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        bool is_good = true;

        for(auto x : g[i]){
            if(h[i] <= h[x]){
                is_good = false;
            }
        }

        if(is_good){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

