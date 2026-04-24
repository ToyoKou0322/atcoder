#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+2,vector<char>(w+2,'#'));
    queue<pair<int,int>> q;
    vector<vector<int>> dist(h+2,vector<int>(w+2,-1));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
            if(s[i][j] == 'E'){
                q.push({i,j});
                dist[i][j] = 0;
            }
        }
    }

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};
    string yajirusi = "v^><";

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i < 4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(s[nx][ny] == '#' || dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            s[nx][ny] = yajirusi[i];
            q.push({nx,ny});
        }
    }

    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
