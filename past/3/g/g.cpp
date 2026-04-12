#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n,X,Y;
    cin >> n >> X >> Y;
    int offset = 250;
    int maxsize = 500;
    vector<vector<bool>> blocked(maxsize + 1,vector<bool>(maxsize + 1,false));
    for(int i=0;i < n;i++){
        int a,b;
        cin >> a >> b;
        a += offset;
        b += offset;
        blocked[a][b] = true;
    }

    vector<vector<int>> dist(maxsize + 1,vector<int>(maxsize + 1,-1));
    dist[0+offset][0+offset] = 0;
    
    vector<int> dy = {1,1,1,0,0,-1};
    vector<int> dx = {1,0,-1,1,-1,0};

    queue<pair<int,int>> q;
    q.push({0,0});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        int c = dist[x+offset][y+offset];
        q.pop();

        if(x == X && y == Y){
            cout << c << endl;
            return 0;
        }

        for(int i=0;i < 6;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < -offset || nx > offset || ny < -offset || ny > offset) continue;

            if(dist[nx+offset][ny+offset] == -1 && !blocked[nx+offset][ny+offset]){
                dist[nx+offset][ny+offset] = c + 1;
                q.push({nx,ny});
            }
        }
    }

    cout << -1 << endl;

    return 0;
}

