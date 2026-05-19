#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n1,n2,m;
vector<vector<int>> g;
vector<int> dist;

int main(){
    cin >> n1 >> n2 >> m;
    g.resize(n1+n2+1);
    for(int i=0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> q;

    q.push(1);
    dist.resize(n1+n2+1,-1);
    dist[1] = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(auto next : g[v]){
            if(dist[next] == -1){
               dist[next] = dist[v] + 1;
               q.push(next);
            }
        }
    }

    q.push(n1+n2);
    dist[n1+n2] = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(auto next : g[v]){
            if(dist[next] == -1){
                dist[next] = dist[v] + 1;
                q.push(next);
            }
        }
    }

    int x = 0;
    int y = 0;
    for(int i=1;i <= n1+n2;i++){
        if(i <= n1){
            x = max(x,dist[i]);
        }else{
            y = max(y,dist[i]);
        }
    }

    cout << x + y + 1 << endl;
    return 0;
}

