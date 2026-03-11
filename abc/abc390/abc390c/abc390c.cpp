#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> grid(h,vector<char>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> grid[i][j];
        }
    }

    int left = 2000;
    int right = 0;
    int up = 2000;
    int down = 0;
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            if(grid[i][j] == '#'){
                left = min(left,j);
                right = max(right,j);
                up = min(up,i);
                down = max(down,i);
            }
        }
    }

    for(int i=up;i <= down;i++){
        for(int j=left;j <= right;j++){
            if(grid[i][j] == '.'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

