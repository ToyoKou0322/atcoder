#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<set<int>> g(n+1);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    for(int i=1;i <= n;i++){
        cout << g[i].size() << " ";
        for(auto x : g[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

