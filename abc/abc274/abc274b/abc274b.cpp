#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> c(h,vector<char>(w));
    vector<int> x(w,0);
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> c[i][j];
            if(c[i][j] == '#'){
                x[j]++;
            }
        }
    }

    for(int i=0;i < w;i++){
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}

