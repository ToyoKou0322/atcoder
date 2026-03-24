#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n,vector<char>(n,'.'));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    vector<vector<char>> ans = a;
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            int k = min(min(i,j),min(n-1-i,n-1-j)) + 1;
            int r = k % 4;
            int nx,ny;
            if(r == 0){
                nx = i;
                ny = j;
            }else if(r == 1){
                nx = j;
                ny = n-1-i;
            }else if(r == 2){
                nx = n-1-i;
                ny = n-1-j;
            }else if(r == 3){
                nx = n-1-j;
                ny = i;
            }
            ans[nx][ny] = a[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}
