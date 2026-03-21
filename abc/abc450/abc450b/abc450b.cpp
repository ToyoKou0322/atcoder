#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> c(n,vector<int>(n));
    for(int i=0;i < n-1;i++){
        for(int j=i+1;j < n;j++){
            cin >> c[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            for(int k=j+1;k < n;k++){
                if(c[i][j] + c[j][k] < c[i][k]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;

}

