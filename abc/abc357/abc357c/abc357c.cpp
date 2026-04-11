#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<vector<char>> ans;
void solve(int k,int r,int c){

    if(k == 0){
        ans[r][c] = '#';
        return;
    }

    for(int i=0;i < 3;i++){
        for(int j=0;j < 3;j++){
            if(i == 1 && j == 1) continue;
            solve(k-1,r+i*pow(3,k-1),c+j*pow(3,k-1));
        }
    }
}

int main(){
    int n;
    cin >> n;

    ans.resize(pow(3,n),vector<char>(pow(3,n),'.'));
    solve(n,0,0);

    for(int i=0;i < ans[0].size();i++){
        for(int j=0;j < ans[0].size();j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}

