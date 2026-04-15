#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> grid(h+2,vector<char>(w+2,'.'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> grid[i][j];
        }
    }

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};
    vector<vector<bool>> seen(h+2,vector<bool>(w+2,false));

    queue<pair<int,int>> q;
    bool ok = true;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(grid[i][j] == '#' && !seen[i][j]){
                q.push({i,j});
                int count = 1;
                seen[i][j] = true;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int k=0;k < 4;k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(!seen[nx][ny] && grid[nx][ny] == '#'){
                            seen[nx][ny] = true;
                            count++;
                            q.push({nx,ny});
                        }
                    }
                }
                if(count == 1){
                    ok = false;
                }
            }
        }
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

