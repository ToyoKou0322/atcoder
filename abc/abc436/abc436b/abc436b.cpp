#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> grid(n,vector<int>(n,-1));

    grid[0][(n-1)/2] = 1;
    int r = 0;
    int c = (n-1)/2;
    int k = 1;

    for(int i=0;i < n*n-1;i++){
        int x = (r-1+n) % n;
        int y = (c+1) % n;
        if(grid[x][y] == -1){
            grid[x][y] = k+1;
            r = x;
            c = y;
            k = k+1;
        }else{
            int x = (r+1) % n;
            grid[x][c] = k+1;
            r = x;
            k = k+1;
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

