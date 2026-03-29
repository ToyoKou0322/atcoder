#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(2,vector<int>(n));
    for(int i=0;i < 2;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        int sum = 0;
        for(int j=0;j < i;j++){
            sum += a[0][j];
        }

        for(int j=i-1;j < n;j++){
            sum += a[1][j];
        }
        ans = max(sum,ans);
    }

    cout << ans << endl;
    return 0;
}

