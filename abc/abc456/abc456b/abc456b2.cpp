#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    vector<vector<int>> a(3,vector<int>(6));
    for(int i=0;i < 3;i++){
        for(int j=0;j < 6;j++){
            cin >> a[i][j];
        }
    }

    double ans = 0;
    for(int i=0;i < 6;i++){
        for(int j=0;j < 6;j++){
            for(int k=0;k < 6;k++){
                if(a[0][i] * a[1][j] * a[2][k] == 120){
                    ans++;
                }
            }
        }
    }

    ans /= 216.0;

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}

