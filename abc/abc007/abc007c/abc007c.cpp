#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int sy,sx,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;
    vector<vector<char>> grid(r,vector<char>(c));
    for(int i=0;i < r;i++){
        for(int j=0;j < c;j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<int>> a(r,vector<int>(c,-1));
    queue<pair<int,int>> q;
    q.push({sy,sx});
    a[sy][sx] = 0;

    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {1,-1,0,0};

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i < 4;i++){
            if(x+dx[i] >= 0 && y+dy[i] >= 0 && x+dx[i] < r && y+dy[i] < c){
                if(grid[x+dx[i]][y+dy[i]] == '.' && a[x+dx[i]][y+dy[i]] == -1){
                    q.push({x+dx[i],y+dy[i]});
                    a[x+dx[i]][y+dy[i]] = a[x][y] + 1;
                }
            }
        }
    }

    cout << a[gy][gx] << endl;
    return 0;
}

