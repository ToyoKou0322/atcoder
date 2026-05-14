#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w,k;
    cin >> h >> w >> k;
    vector<vector<char>> c(h,vector<char>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> c[i][j];
        }
    }

    int ans = 0;
    for(int bit=0;bit < (1 << (h+w));bit++){
        vector<vector<char>> x = c;
        for(int i=0;i < h+w;i++){
            if(bit & (1 << i)){
                if(i < h){
                    for(int j=0;j < w;j++){
                        x[i][j] = '.';
                    }
                }else{
                    for(int j=0;j < h;j++){
                        x[j][i-h] = '.';
                    }
                }
            }
        }

        int cnt = 0;
        for(int i=0;i < h;i++){
            for(int j=0;j < w;j++){
                if(x[i][j] == '#'){
                    cnt++;
                }
            }
        }
        if(cnt == k){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

