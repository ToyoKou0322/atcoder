#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<vector<char>> s(h+2,vector<char>(w+2,'#'));
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            cin >> s[i][j];
        }
    }

    reverse(t.begin(),t.end());
    int ans = 0;
    for(int i=1;i <= h;i++){
        for(int j=1;j <= w;j++){
            if(s[i][j] == '.'){
                bool ok = true;
                int x = i;
                int y = j;
                for(int k=0;k < n;k++){
                    if(t[k] == 'U'){
                        x++;
                    }else if(t[k] == 'D'){
                        x--;
                    }else if(t[k] == 'R'){
                        y--;
                    }else if(t[k] == 'L'){
                        y++;
                    }
                    if(s[x][y] == '#'){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

