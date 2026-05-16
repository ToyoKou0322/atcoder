#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;

    vector<vector<int>> x(h,vector<int>(w,0));

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            int c = 0;
            for(int k=0;k < 4;k++){
                int nx = dx[k] + i;
                int ny = dy[k] + j;
                if(nx < h && nx >= 0 && ny < w && ny >= 0){
                    c++;
                }
            }
            x[i][j] = c;
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

