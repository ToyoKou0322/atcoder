#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    vector<int> dx = {-1,1,0,0,-1,-1,1,1};
    vector<int> dy = {0,0,-1,1,-1,1,-1,1};

    long long ans = 0;
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            for(int k=0;k < 8;k++){
                string tmp = "";
                int x = i;
                int y = j;
                for(int l=0;l < n;l++){
                    tmp.push_back(a[x][y]);
                    x = (x + dx[k] + n) % n;
                    y = (y + dy[k] + n) % n;
                }
                ans = max(ans,stoll(tmp));
            }
        }
    }

    cout << ans << endl;
    return 0;
}

