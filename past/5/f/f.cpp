#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> abc(m,vector<int>(3));
    for(int i=0;i < m;i++){
        cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        set<int> s;
        bool ok = true;
        for(int i=0;i < m;i++){
            int c = 0;
            for(int j=0;j < 3;j++){
                if(bit & (1 << (abc[i][j]-1))){
                    c++;
                }
            }
            if(c == 3){
                ok = false;
            }
            if(c == 2){
                for(int j=0;j < 3;j++){
                    if(!(bit & (1 << (abc[i][j]-1)))){
                        s.insert(abc[i][j]);
                    }
                }
            }
        }
        if(ok){
            int x = s.size();
            ans = max(ans,x);
        }
    }

    cout << ans << endl;
    return 0;
}

