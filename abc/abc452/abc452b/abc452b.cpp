#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> grid(h,vector<char>(w,'#'));
    for(int i=1;i < h-1;i++){
        for(int j=1;j < w-1;j++){
            grid[i][j] = '.';
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
}

