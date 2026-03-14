#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> b(n,vector<char>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> b[i][j];
        }
    }

    vector<vector<char>> ans(n,vector<char>(n,0));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(i == 0){
                if(j == 0){
                    ans[i][j] = b[1][0];
                }else{
                    ans[i][j] = b[i][j-1];
                }
            }else if(j == n-1){
                if(i == 0){
                    ans[i][j] = b[i][j-1];
                }else{
                    ans[i][j] = b[i-1][j];
                }
            }else if(i == n-1){
                if(j == n-1){
                    ans[i][j] = b[i-1][j];
                }else{
                    ans[i][j] = b[i][j+1];
                }
            }else if(j == 0){
                if(i == n-1){
                    ans[i][j] = b[i][j+1];
                }else{
                    ans[i][j] = b[i+1][j];
                }
            }
        }
    }

    for(int i=1;i < n-1;i++){
        for(int j=1;j < n-1;j++){
            ans[i][j] = b[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}
