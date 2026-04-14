#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int w,h,n;
    cin >> w >> h >> n;
    vector<int> x(n),y(n),a(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i] >> a[i];
    }

    vector<vector<char>> grid(h+2,vector<char>(w+2,'.'));

    for(int i=0;i < n;i++){
        for(int j=1;j <= h;j++){
            for(int k=1;k <= w;k++){
                if(a[i] == 1 && k <= x[i]){
                    grid[j][k] = '#';
                }else if(a[i] == 2 && k > x[i]){
                    grid[j][k] = '#';
                }else if(a[i] == 3 && j <= y[i]){
                    grid[j][k] = '#';
                }else if(a[i] == 4 && j > y[i]){
                    grid[j][k] = '#';
                }
            }
        }
    }

    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(grid[i][j] == '.'){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

