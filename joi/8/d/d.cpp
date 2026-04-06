#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int m,n;
vector<vector<int>> s;
vector<vector<bool>> seen;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
int ans = 0;

void dfs(int x,int y,int c){
    seen[x][y] = true;
    ans = max(c,ans);
    for(int i=0;i < 4;i++){
        int a = x + dx[i];
        int b = y + dy[i];
        if(!seen[a][b] && s[a][b] == 1){
            dfs(a,b,c+1);
        }
    }
    seen[x][y] = false;
}

int main(){
    cin >> m >> n;
    s.resize(n+2,vector<int>(m+2,0));
    for(int i=1;i <= n;i++){
        for(int j=1;j <= m;j++){
            cin >> s[i][j];
        }
    }

    seen.resize(n+2,vector<bool>(m+2,false));
    for(int i=1;i <= n;i++){
        for(int j=1;j <= m;j++){
            if(s[i][j] == 1){
                dfs(i,j,1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

