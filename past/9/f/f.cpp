#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    vector<vector<char>> s(5,vector<char>(5,'.'));
    vector<vector<bool>> seen(11,vector<bool>(11,false));
    for(int i=1;i <= 3;i++){
        for(int j=1;j <= 3;j++){
            cin >> s[i][j];
        }
    }

    queue<pair<int,int>> q;
    q.push({a,b});
    seen[a][b] = true;
    vector<int> dx = {-1,1,0,0,1,1,-1,-1};
    vector<int> dy = {0,0,-1,1,-1,1,1,-1};

    int ans = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i < 8;i++){
            int m = 2 + dx[i];
            int l = 2 + dy[i];
            int nextx = x + dx[i];
            int nexty = y + dy[i];
            if(s[m][l] == '#' && nextx <= 9 && nextx >= 1 && nexty <= 9 && nexty >= 1 && !seen[nextx][nexty]){
                seen[nextx][nexty] = true;
                q.push({nextx,nexty});
            }
        }
    }

    for(int i=1;i <= 9;i++){
        for(int j=1;j <= 9;j++){
            if(seen[i][j]){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

