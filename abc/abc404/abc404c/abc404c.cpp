#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> seen;

void dfs(int v){
    seen[v] = true;

    for(int next_v : graph[v]){
        if(seen[next_v]){
            continue;
        }
        dfs(next_v);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    if(n != m){
        cout << "No" << endl;
        return 0;
    }
    graph.assign(n+1,vector<int>());
    seen.assign(n+1, false);
    vector<int> degree(n+1,0);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    for(int i=1;i < n+1;i++){
        if(degree[i] != 2){
            cout << "No" << endl;
            return 0;
        }
    }

    dfs(1);
    for(int i=1;i <= n;i++){
        if(!seen[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

