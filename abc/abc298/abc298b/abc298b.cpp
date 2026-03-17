#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<vector<int>> b(n,vector<int>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> b[i][j];
        }
    }

    for(int x=0;x < 4;x++){
        bool ok = true;
        for(int i=0;i < n;i++){
            for(int j=0;j < n;j++){
                if(a[i][j] == 1 && b[i][j] != 1){
                    ok = false;
                }
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
        
        vector<vector<int>> c = a;
        for(int i=0;i < n;i++){
            for(int j=0;j < n;j++){
                a[i][j] = c[n-1-j][i];
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

