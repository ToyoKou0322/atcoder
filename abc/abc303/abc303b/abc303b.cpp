#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(m,vector<int>(n));
    for(int i=0;i < m;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        for(int j=i+1;j <= n;j++){
            bool ok = false;

            for(int k=0;k < m;k++){
                for(int l=1;l < n;l++){
                    if((a[k][l] == i && a[k][l-1] == j) || (a[k][l] == j && a[k][l-1] == i)){
                        ok = true;
                    }
                }
            }
            if(!ok){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

