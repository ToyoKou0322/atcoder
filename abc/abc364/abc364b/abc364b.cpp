#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int currentX,currentY;
    cin >> currentX >> currentY;
    currentX--; //0-indexedに変換
    currentY--;
    vector<vector<char>> c(h,vector<char>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> c[i][j];
        }
    }
    string x;
    cin >> x;

    for(int i=0;i < x.size();i++){
        if(x[i] == 'L' && currentY > 0){
            if(c[currentX][currentY-1] == '.'){
                currentY--;
            }
        }else if(x[i] == 'R' && currentY < w-1){
            if(c[currentX][currentY+1] == '.'){
                currentY++;
            }
        }else if(x[i] == 'U' && currentX > 0){
            if(c[currentX-1][currentY] == '.'){
                currentX--;
            }
        }else if(x[i] == 'D' && currentX < h-1){
            if(c[currentX+1][currentY] == '.'){
                currentX++;
            }
        }
    }

    cout << currentX+1 << " " << currentY+1 << endl;
    return 0;
}

