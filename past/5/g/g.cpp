#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int h,w;
vector<vector<bool>> seen;
vector<vector<char>> s;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
vector<pair<int,int>> ans;
int cc = 0;
bool ok = false;

void dfs(int x,int y,int c){
    seen[x][y] = true;
    for(int i=0;i < 4;i++){
        int a = x+dx[i];
        int b = y+dy[i];
        if(!seen[a][b] && s[a][b] == '#'){
            ans.push_back({a,b});
            dfs(a,b,c+1);
            if(ok){
                return;
            }else{
                ans.pop_back();
            }
        }
    }
    if(c == cc){
        ok = true;
    }
    seen[x][y] = false;
}

int main(){
    cin >> h >> w;
    s.resize(h+2,vector<char>(w+2,'.'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
            if(s[i][j] == '#'){
                cc++;
            }
        }
    }

    seen.resize(h+2,vector<bool>(w+2,false));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(s[i][j] == '#'){
                ans.push_back({i,j});
                dfs(i,j,1);
                if(ok){
                    cout << ans.size() << endl;
                    for(int k=0;k < ans.size();k++){
                        cout << ans[k].first << " " << ans[k].second << endl;
                    }
                    return 0;
                }
                ans.pop_back();
            }
        }
    }
}

