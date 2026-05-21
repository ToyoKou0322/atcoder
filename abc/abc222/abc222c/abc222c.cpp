#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

char win(char c){
    if(c == 'G'){
        return 'P';
    }else if(c == 'P'){
        return 'C';
    }else if(c == 'C'){
        return 'G';
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> a(2*n,vector<char>(m));
    for(int i=0;i < 2*n;i++){
        for(int j=0;j < m;j++){
            cin >> a[i][j];
        }
    }
}

