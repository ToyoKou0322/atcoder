#include <iostream>
#include <vector>
#include <set>

using namespace std;
int h, w;
vector<vector<int>> a; 
set<int> st;
long long ans = 0;

void dfs(int x, int y){
    if(st.find(a[x][y]) != st.end()){
        return;
    }
    
    if(x == h && y == w){
        ans++;
    }
    
    st.insert(a[x][y]);
    
    if(a[x+1][y] != -1){
        dfs(x+1, y);
    }
    if(a[x][y+1] != -1){
        dfs(x, y+1);
    }
    
    st.erase(a[x][y]);
}

int main(){
    cin >> h >> w;
    a.resize(h+2, vector<int>(w+2, -1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> a[i][j];
        }
    }

    dfs(1, 1);
    cout << ans << endl;
    return 0;
}
