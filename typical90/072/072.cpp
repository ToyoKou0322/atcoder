#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int h,w;
vector<vector<char>> c;
vector<vector<bool>> seen;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
int ans = -1;
int sx,sy;

void dfs(int x,int y,int k){
    if(k > 0){
        seen[x][y] = true;
    }
    if(x == sx && y == sy && k >= 3){
        ans = max(ans,k);
    }
    for(int i=0;i < 4;i++){
        int a = x + dx[i];
        int b = y + dy[i];
        if(!seen[a][b] && c[a][b] == '.'){
            dfs(a,b,k+1);
        }
    }
    seen[x][y] = false;
}

int main(){
    cin >> h >> w;
    c.resize(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> c[i][j];
        }
    }

    seen.resize(h+2,vector<bool>(w+2,false));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(c[i][j] == '.'){
                sx = i;
                sy = j;
                dfs(sx,sy,0);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
