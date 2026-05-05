#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;

    int n = min(h,w);
    vector<int> ans(n,0);

    vector<vector<char>> c(h+2,vector<char>(w+2,'.'));
    
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> c[i][j];
        }
    }

    vector<vector<bool>> seen(h+2,vector<bool>(w+2,false));

    vector<int> dx = {0,0,-1,1,-1,-1,1,1};
    vector<int> dy = {-1,1,0,0,-1,1,-1,1};

    queue<pair<int,int>> q;

    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(c[i][j] == '#' && !seen[i][j]){
                int cnt = 1;
                q.push({i,j});
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int k=0;k < 8;k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(seen[nx][ny] || c[nx][ny] == '.') continue;
                        cnt++;
                        seen[nx][ny] = true;
                        q.push({nx,ny});
                    }
                }
                ans[cnt/4-1]++;
            }
        }
    }

    for(int i=0;i < n;i++){
        cout << ans[i] << " ";
    }

    return 0;
}

