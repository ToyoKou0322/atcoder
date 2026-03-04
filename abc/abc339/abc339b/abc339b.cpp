#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int h,w;
int currentX = 0;
int currentY = 0;
void movement(int d){
    if(d == 0){
        currentX = (currentX - 1 + h) % h;
    }else if(d == 1){
        currentY = (currentY + 1) % w;
    }else if(d == 2){
        currentX = (currentX + 1) % h;
    }else if(d == 3){
        currentY = (currentY - 1 + w) % w;
    }
}

int main(){
    int n;
    cin >> h >> w >> n;
    vector<vector<char>> grid(h,vector<char>(w,'.'));
    int cd = 0;

    for(int i=0;i < n;i++){
        if(grid[currentX][currentY] == '.'){
            grid[currentX][currentY] = '#';
            cd = (cd + 1) % 4;
            movement(cd);
        }else{
            grid[currentX][currentY] = '.';
            cd = (cd - 1 + 4) % 4;
            movement(cd);
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}

