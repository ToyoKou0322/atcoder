#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> grid(n+1,vector<char>(n+1,'.'));
    for(int i=1;i <= n;i++){
        int j = n+1-i;
        if(i <= j){
            for(int k=i;k <= j;k++){
                for(int l=i;l <= j;l++){
                    if(i%2 == 1){
                        grid[k][l] = '#';
                    }else{
                        grid[k][l] = '.';
                    }
                }
            }
        }
    }

    for(int i=1;i <= n;i++){
        for(int j=1;j <= n;j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}

