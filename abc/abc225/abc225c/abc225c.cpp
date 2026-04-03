#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<long long>> b(n,vector<long long>(m));
    for(int i=0;i < n;i++){
        for(int j=0;j < m;j++){
            cin >> b[i][j];
        }
    }

    bool ok = true;
    for(int i=0;i < n;i++){
        for(int j=1;j < m;j++){
            if(b[i][j] != b[i][j-1] + 1){
                ok = false;
            }
        }
    }

    bool ok2 = true;
    for(int i=0;i < m;i++){
        for(int j=1;j < n;j++){
            if(b[j][i] != b[j-1][i] + 7){
                ok2 = false;
            }
        }
    }

    bool ok3 = true;
    for(int i=0;i < n;i++){
        int row = (b[i][0] - 1) / 7;
        for(int j=0;j < m;j++){
            if(b[i][j] > (row+1)*7){
                ok3 = false;
            }
        }
    }

    if(ok && ok2 && ok3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

