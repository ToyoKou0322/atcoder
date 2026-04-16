#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> dist(n+2,vector<int>(n+2,-1));
    queue<pair<int,int>> q;
    q.push({1,1});
    dist[1][1] = 0;

    set<pair<int,int>> moves;

    for(int i=1;i <= n;i++){
        for(int j=1;j <= n;j++){
            if((i-1)*(i-1) + (j-1)*(j-1) == m){
                int x = i-1;
                int y = j-1;
                moves.insert({x,y});
                moves.insert({-x,y});
                moves.insert({-x,-y});
                moves.insert({x,-y});
            }
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(auto move : moves){
            int nx = x + move.first;
            int ny = y + move.second;
            if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
            if(dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }

    }

    for(int i=1;i <= n;i++){
        for(int j=1;j <= n;j++){
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

