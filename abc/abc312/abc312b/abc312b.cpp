#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> s(n,vector<char>(m));
    for(int i=0;i < n;i++){
        for(int j=0;j < m;j++){
            cin >> s[i][j];
        }
    }

     char left[4][4] = {{'#','#','#','.'},{'#','#','#','.'},{'#','#','#','.'},{'.','.','.','.'}};

     char right[4][4] = {{'.','.','.','.'},{'.','#','#','#'},{'.','#','#','#'},{'.','#','#','#'}};

    for(int i=0;i < n-8;i++){
        for(int j=0;j < m-8;j++){
            bool x = true;
            bool y = true;
            for(int k=i; k < i+4;k++){
                for(int l=j;l < j+4;l++){
                    if(s[k][l] != left[k-i][l-j]){
                        x = false;
                    }
                }
            }

            for(int k=i+5;k < i+9;k++){
                for(int l=j+5;l < j+9;l++){
                    if(s[k][l] != right[k-i-5][l-j-5]){
                        y = false;
                    }
                }
            }

            if(x && y){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}

