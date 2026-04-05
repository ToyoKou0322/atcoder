#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int h,w,k;
vector<vector<char>> s;
vector<vector<bool>> seen;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
int c = 0;
int ans = 0;

void dfs(int x,int y){
    seen[x][y] = true;
    if(c == k){
        ans++;
        seen[x][y] = false;
        return;
    }
    for(int i=0;i < 4;i++){
        if(!seen[x+dx[i]][y+dy[i]] && s[x+dx[i]][y+dy[i]] != '#'){
            c++;
            dfs(x+dx[i],y+dy[i]);
            c--;
        }
    }
    seen[x][y] = false;
}

int main(){
    cin >> h >> w >> k;
    s.resize(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    seen.resize(h+2,vector<bool>(w+2));

    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(s[i][j] == '.'){
                dfs(i,j);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

