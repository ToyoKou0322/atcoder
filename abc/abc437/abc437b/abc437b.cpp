#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>> a(h,vector<int>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> a[i][j];
        }
    }

    vector<int> b(n);
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    int ans = 0;
    for(int i=0;i < h;i++){
        int x = 0;
        for(int j=0;j < w;j++){
            for(int k=0;k < n;k++){
                if(a[i][j] == b[k]){
                    x++;
                }
            }
        }
        ans = max(ans,x);
    }

    cout << ans << endl;
    return 0;
}

