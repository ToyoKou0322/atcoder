#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<char>> b(r+18,vector<char>(c+18,'.'));
    for(int i=9;i < r+9;i++){
        for(int j=9;j < c+9;j++){
            cin >> b[i][j];
        }
    }

    for(int i=9;i < r+9;i++){
        for(int j=9;j < c+9;j++){
            if(b[i][j] != '.' && b[i][j] != '#'){
                int x = b[i][j] - '0';
                for(int k=0;k < r+18;k++){
                    for(int l=0;l < c+18;l++){
                        if(x >= abs(k-i) + abs(l-j) && b[k][l] == '#'){
                            b[k][l] = '.';
                        }
                    }
                }
                b[i][j] = '.';
            }
        }
    }

    for(int i=9;i < r+9;i++){
        for(int j=9;j < c+9;j++){
            cout << b[i][j];
        }
        cout << endl;
    }
}

