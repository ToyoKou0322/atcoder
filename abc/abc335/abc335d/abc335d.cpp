#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> dist(n+2,vector<int>(n+2,-1));
    int center = (n+1)/2;
    dist[center][center] = -2;

    vector<int> dx = {0,1,0,-1};
    vector<int> dy = {1,0,-1,0};

    int x = 1;
    int y = 1;
    int dir = 0;
    for(int i=1;i <= n*n-1;i++){
        dist[x][y] = i;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx > n || nx < 1 || ny > n || ny < 1 || dist[nx][ny] != -1){
            dir = (dir+1)%4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for(int i=1;i <= n;i++){
        for(int j=1;j <= n;j++){
            if(i == center && j == center){
                cout << 'T' << " ";
            }else{
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
