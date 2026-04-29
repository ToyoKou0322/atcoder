#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> c(h,vector<char>(w,'.'));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> c[i][j];
        }
    }

    vector<vector<char>> ans(2*h,vector<char>(w,'.'));
    for(int i=0;i < 2*h;i++){
        for(int j=0;j < w;j++){
            ans[i][j] = c[i/2][j];
        }
    }

    for(int i=0;i < 2*h;i++){
        for(int j=0;j < w;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}

