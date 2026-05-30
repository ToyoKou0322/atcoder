#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};


int main(){
    long long h,w;
    cin >> h >> w;
    vector<vector<char>> s(h,vector<char>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> s[i][j];
        }
    }

    vector<vector<char>> g = s;
    queue<pair<int,int>> q;
    vector<vector<int>> dist(h,vector<int>(w,-1));

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            if(s[i][j] == '#'){
                g[i][j] = '.';
            }else{
                for(int k=0;k < 8;k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(nx < 0 || nx > h-1 || ny < 0 || ny > w-1){
                        continue;
                    }
                    if(s[nx][ny] == '#'){
                        g[i][j] = '#';
                        break;
                    }
                }
            }
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            if(g[i][j] == '#'){
                q.push({i,j});
                dist[i][j] = 0;
            }
        }
    }

    if(q.empty()){
        for(int i=0;i < h;i++){
            for(int j=0;j < w;j++){
                cout << g[i][j];
            }
            cout << endl;
        }
        return 0;
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i < 8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx > h-1 || ny < 0 || ny > w-1){
                continue;
            }
            if(dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            if(dist[i][j] % 2 == 0){
                cout << '.';
            }else{
                cout << '#';
            }
        }
        cout << endl;
    }

    return 0;
}

