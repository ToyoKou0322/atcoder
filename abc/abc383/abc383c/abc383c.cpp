#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int h,w,d;
vector<vector<char>> s;
vector<vector<int>> a;
queue<pair<int,int>> q;

void bfs(){
    if(q.size() == 0){
        return;
    }

    int x = q.front().first;
    int y = q.front().second;

    if(a[x+1][y] == -1 && s[x+1][y] != '#'){
        a[x+1][y] = a[x][y] + 1;
        q.push({x+1,y});
    }

    if(a[x-1][y] == -1 && s[x-1][y] != '#'){
        a[x-1][y] = a[x][y] + 1;
        q.push({x-1,y});
    }

    if(a[x][y+1] == -1 && s[x][y+1] != '#'){
        a[x][y+1] = a[x][y] + 1;
        q.push({x,y+1});
    }

    if(a[x][y-1] == -1 && s[x][y-1] != '#'){
        a[x][y-1] = a[x][y] + 1;
        q.push({x,y-1});
    }

    q.pop();
    bfs();
}

int main(){
    cin >> h >> w >> d;
    s.assign(h+2,vector<char>(w+2,'#'));
    a.assign(h+2,vector<int>(w+2,-1));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    int ans = 0;
    for(int i=0;i < h+2;i++){
        for(int j=0;j < w+2;j++){
            if(s[i][j] == 'H'){
                q.push({i,j});
                a[i][j] = 0;
            }
        }
    }

    bfs();

    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(a[i][j] <= d && a[i][j] != -1){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

