#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> s(h+2,vector<char>(w+2,'x'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=i;j <= h;j++){
            for(int k=1;k <= w;k++){
                for(int l=k;l <= w;l++){
                    bool ok = true;
                    for(int a=i;a <= j;a++){
                        for(int b=k;b <= l;b++){
                            if(s[a][b] != s[i+j-a][k+l-b]){
                                ok = false;
                            }
                        }
                    }
                    if(ok){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

