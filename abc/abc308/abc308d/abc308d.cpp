#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int h,w;
vector<vector<char>> s;
vector<vector<bool>> seen;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
string snuke = "snuke";
bool ok = false;

void dfs(int x,int y,int curr){
    seen[x][y] = true;
    for(int i=0;i < 4;i++){
        int a = x+dx[i];
        int b = y+dy[i];
        if(!seen[a][b] && s[a][b] == snuke[(curr+1)%5]){
            dfs(a,b,(curr+1)%5);
        }
    }

    if(x == h && y == w){
        ok = true;
    }
}

int main(){
    cin >> h >> w;
    s.resize(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    if(s[1][1] != 's'){
        cout << "No" << endl;
        return 0;
    }

    seen.resize(h+2,vector<bool>(w+2,false));
    dfs(1,1,0);
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

