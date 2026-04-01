#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<bool>> known(n, vector<bool>(n, false));
    
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        known[x][y] = true;
        known[y][x] = true;
    }

    int ans = 0;
    
    for(int bit = 0; bit < (1 << n); bit++){
        bool all_connected = true;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                count++;
                
                for(int j = i + 1; j < n; j++){
                    if(bit & (1 << j)){
                        if(!known[i][j]){
                            all_connected = false;
                        }
                    }
                }
            }
        }
        
        if(all_connected){
            ans = max(ans, count);
        }
    }
    
    cout << ans << endl;
    return 0;
}
