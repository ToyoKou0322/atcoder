#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> ans(n);
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(a[i][j] == 1){
                ans[i].push_back(j+1);
            }
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

