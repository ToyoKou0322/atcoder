#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> grid(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> grid[i][j];
        }
    }

    queue<pair<int,int>> q;
    q.push({1,1});

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};

    vector<vector<int>> dist(h+2,vector<int>(w+2,-1));
    dist[1][1] = 0;

    bool ok = false;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == h && y == w){
            ok = true;
            break;
        }

        for(int i=0;i < 4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(dist[nx][ny] == -1 && grid[nx][ny] != '#'){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

    if(!ok){
        cout << -1 << endl;
        return 0;
    }

    int curx = h;
    int cury = w;
    vector<vector<bool>> seen(h+2,vector<bool>(w+2,false));
    seen[curx][cury] = true;
    while(!(curx == 1 && cury == 1)){
        for(int i=0;i < 4;i++){
            int nx = curx + dx[i];
            int ny = cury + dy[i];
            if(dist[nx][ny] == dist[curx][cury] - 1){
                seen[nx][ny] = true;
                curx = nx;
                cury = ny;
                break;
            }
        }
    }

    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(!seen[i][j] && grid[i][j] != '#'){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;

}

