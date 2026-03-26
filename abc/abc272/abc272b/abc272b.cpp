#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> x(m);
    for(int i=0;i < m;i++){
        int k;
        cin >> k;
        for(int j=0;j < k;j++){
            int a;
            cin >> a;
            x[i].push_back(a);
        }
    }

    vector<vector<bool>> y(n+1,vector<bool>(n+1,false));

    for(int i=0;i < m;i++){
        for(int j=0;j < x[i].size();j++){
            for(int k=j+1;k < x[i].size();k++){
                y[x[i][j]][x[i][k]] = true;
            }
        }
    }

    for(int i=1;i <= n;i++){
        for(int j=i+1;j <= n;j++){
            if(!y[i][j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}

