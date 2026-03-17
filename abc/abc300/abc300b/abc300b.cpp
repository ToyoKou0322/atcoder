#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> a(h,vector<char>(w));
    vector<vector<char>> b(h,vector<char>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> b[i][j];
        }
    }

    vector<vector<char>> c(h*2,vector<char>(w*2,'.'));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            c[i][j] = b[i][j];
        }
    }

    for(int i=h;i < h*2;i++){
        for(int j=0;j < w;j++){
            c[i][j] = b[i-h][j];
        }
    }

    for(int i=0;i < h;i++){
        for(int j=w;j < w*2;j++){
            c[i][j] = b[i][j-w];
        }
    }

    for(int i=h;i < h*2;i++){
        for(int j=w;j < w*2;j++){
            c[i][j] = b[i-h][j-w];
        }
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            bool ok = true;
            for(int k=i;k < i+h;k++){
                for(int l=j;l < j+w;l++){
                    if(a[k-i][l-j] != c[k][l]){
                        ok = false;
                    }
                }
            }
            if(ok){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

