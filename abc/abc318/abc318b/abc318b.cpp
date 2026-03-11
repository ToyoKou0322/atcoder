#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n),c(n),d(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    vector<vector<int>> g(100,vector<int>(100,0));
    for(int i=0;i < n;i++){
        for(int j=c[i];j < d[i];j++){
            for(int k=a[i]; k < b[i];k++){
                g[j][k] = 1;
            }
        }
    }

    int ans = 0;
    for(int i=0;i < 100;i++){
        for(int j=0;j < 100;j++){
            if(g[i][j] == 1){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

