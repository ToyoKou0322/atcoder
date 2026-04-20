#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<vector<char>> s(11,vector<char>(11,'.'));
    for(int i=1;i <= 9;i++){
        for(int j=1;j <= 9;j++){
            cin >> s[i][j];
        }
    }

    int ans = 0;
    for(int i=1;i <= 9;i++){
        for(int j=1;j <= 9;j++){
            if(s[i][j] == '#'){
                for(int k=1;k <= 9;k++){
                    for(int l=1;l <= 9;l++){
                        if(s[k][l] == '#' && !(k == i && l == j)){
                            int dx = k - i;
                            int dy = l - j;
                            int nx1 = i - dy;
                            int ny1 = j + dx;
                            int nx2 = k - dy;
                            int ny2 = l + dx;
                            if(nx1 > 9 || nx1 < 1 || ny1 > 9 || ny1 < 1 || nx2 > 9 || nx2 < 1 || ny2 > 9 || ny2 < 1) continue;
                            if(s[nx1][ny1] == '#' && s[nx2][ny2] == '#'){
                                ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    ans /= 4;
    cout << ans << endl;
    return 0;
}

