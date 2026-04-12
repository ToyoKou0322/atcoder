#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

struct State {
    int x,y,dir;
};

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+2,vector<char>(w+2,'#'));
    int sx = -1;
    int sy = -1;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
            if(s[i][j] == 'S'){
                sx = i;
                sy = j;
            }
        }
    }

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};
    string houkou = "UDLR";

    vector<vector<vector<bool>>> visited(h+2,vector<vector<bool>>(w+2,vector<bool>(5,false)));
    vector<vector<vector<State>>> pre(h+2,vector<vector<State>>(w+2,vector<State>(5,{-1,-1,-1})));

    queue<State> q;
    q.push({sx,sy,4});
    visited[sx][sy][4] = true;

    int gx = -1;
    int gy = -1;
    int gdir = -1;

    while(!q.empty()){
        State cur = q.front();
        q.pop();

        int x = cur.x;
        int y = cur.y;
        int p = cur.dir;

        if(s[x][y] == 'G'){
            gx = x;
            gy = y;
            gdir = p;
            break;
        }

        for(int i=0;i < 4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(s[x][y] == 'o' && i != p) continue;
            if(s[x][y] == 'x' && i == p) continue;

            if(s[nx][ny] != '#'){
                if(!visited[nx][ny][i]){
                    visited[nx][ny][i] = true;
                    pre[nx][ny][i] = cur;
                    q.push({nx,ny,i});
                }
            }
        }
    }

    if(gx == -1){
        cout << "No" << endl;
        return 0;
    }else{
        cout << "Yes" << endl;
    }

    string ans = "";
    State cur = {gx,gy,gdir};

    while(!(cur.x == sx && cur.y == sy && cur.dir == 4)){
        ans += houkou[cur.dir];
        cur = pre[cur.x][cur.y][cur.dir];
    }

    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}

