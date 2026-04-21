#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int h,w,k;
    cin >> h >> w >> k;
    vector<vector<char>> s(h+2,vector<char>(w+2,'x'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    int ans = INT_MAX;
    if(w >= k){
        for(int i=1;i <= h;i++){
            int x_cnt = 0;
            int dot_cnt = 0;

            for(int j=1;j <= k;j++){
                if(s[i][j] == 'x') x_cnt++;
                else if(s[i][j] == '.') dot_cnt++;
            }

            if(x_cnt == 0){
                ans = min(ans,dot_cnt);
            }

            for(int j=k+1;j <= w;j++){
                if(s[i][j-k] == 'x') x_cnt--;
                else if(s[i][j-k] == '.') dot_cnt--;

                if(s[i][j] == 'x') x_cnt++;
                else if(s[i][j] == '.') dot_cnt++;

                if(x_cnt == 0){
                    ans = min(ans,dot_cnt);
                }
            }
        }
    }

    if(h >= k){
        for(int i=1;i <= w;i++){
            int x_cnt = 0;
            int dot_cnt = 0;

            for(int j=1;j <= k;j++){
                if(s[j][i] == 'x') x_cnt++;
                else if(s[j][i] == '.') dot_cnt++;
            }

            if(x_cnt == 0){
                ans = min(ans,dot_cnt);
            }

            for(int j=k+1;j <= h;j++){
                if(s[j-k][i] == 'x') x_cnt--;
                else if(s[j-k][i] == '.') dot_cnt--;

                if(s[j][i] == 'x') x_cnt++;
                else if(s[j][i] == '.') dot_cnt++;

                if(x_cnt == 0){
                    ans = min(ans,dot_cnt);
                }
            }
        }
    }

    if(ans == INT_MAX){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    return 0;
}

