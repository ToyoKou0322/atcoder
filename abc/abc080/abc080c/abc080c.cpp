#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> am(n,vector<int>(5));
    vector<vector<int>> pm(n,vector<int>(5));
    vector<vector<int>> p(n,vector<int>(11));
    for(int i=0;i < n;i++){
        for(int j=0;j < 5;j++){
            cin >> am[i][j] >> pm[i][j];
        }
    }
    for(int i=0;i < n;i++){
        for(int j=0;j < 11;j++){
            cin >> p[i][j];
        }
    }

    int ans = INT_MIN;
    for(int bit=1;bit < (1 << 10);bit++){
        vector<long long> c(n,0);
        int x = 0;
        for(int i=0;i < 10;i++){
            if(bit & (1 << i)){
                for(int j=0;j < n;j++){
                    if(am[j][i/2] == 1 && i % 2 == 0){
                        c[j]++;
                    }
                    if(pm[j][i/2] == 1 && i % 2 == 1){
                        c[j]++;
                    }
                }
            }
        }
        for(int i=0;i < n;i++){
            x += p[i][c[i]];
        }
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}

