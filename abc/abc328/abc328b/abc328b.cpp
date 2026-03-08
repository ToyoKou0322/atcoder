#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0;i < n;i++){
        cin >> d[i];
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        for(int j=1;j <= d[i-1];j++){
            if((j == i && j < 10 && i < 10) || (j == i && j % 11 == 0 && i % 11 == 0) || j == (i * 10) + i || i == (j * 10) + j){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

