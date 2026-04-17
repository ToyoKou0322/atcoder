#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+2,vector<char>(w+2,'.'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    vector<vector<bool>> seen(h+2,vector<bool>(w+2,false));
    queue<pair<int,int>> q;

    vector<int> dx = {-1,1,0,0,-1,-1,1,1};
    vector<int> dy = {0,0,-1,1,-1,1,-1,1};

    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(s[i][j] == '#' && !seen[i][j]){
                ans++;
                seen[i][j] = true;
                q.push({i,j});
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int k=0;k < 8;k++){
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(s[nx][ny] == '#' && !seen[nx][ny]){
                            seen[nx][ny] = true;
                            q.push({nx,ny});
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

