#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> s(m);
    for(int i=0;i < m;i++){
        cin >> k[i];
        for(int j=0;j < k[i];j++){
            int x;
            cin >> x;
            s[i].push_back(x);
        }
    }
    vector<int> p(m);
    for(int i=0;i < m;i++){
        cin >> p[i];
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        bool ok = true;
        for(int i=0;i < m;i++){
            int count = 0;
            for(int j=0;j < k[i];j++){
                if(bit & (1 << (s[i][j]-1))){
                    count++;
                }
            }
            if(count % 2 != p[i]){
                ok = false;
            }
        }
        if(ok){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

