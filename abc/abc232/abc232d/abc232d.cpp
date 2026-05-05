#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> c(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> c[i][j];
        }
    }

    vector<int> dx = {0,1};
    vector<int> dy = {1,0};

    queue<pair<int,int>> q;
    q.push({1,1});

    vector<vector<int>> dist(h+2,vector<int>(w+2,-1));
    dist[1][1] = 0;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i < 2;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(dist[nx][ny] != -1) continue;
            if(c[nx][ny] == '#') continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }

    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            ans = max(ans,dist[i][j]);
        }
    }

    ans++;

    cout << ans << endl;
    return 0;
}

