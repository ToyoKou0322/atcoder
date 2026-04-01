#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> a(m),b(m);
    for(int i=0;i < m;i++){
        cin >> k[i];
        for(int j=0;j < k[i];j++){
            int x,y;
            cin >> x >> y;
            a[i].push_back(x);
            b[i].push_back(y);
        }
    }

    for(int bit=0;bit < (1 << n);bit++){
        bool all = true;
        for(int i=0;i < m;i++){
            bool ok = false;
            for(int j=0;j < k[i];j++){
                if((bit & (1 << (a[i][j]-1))) && b[i][j] == 1){
                    ok = true;
                }else if(!(bit & (1 << (a[i][j]-1))) && b[i][j] == 0){
                    ok = true;
                }
            }
            if(!ok){
                all = false;
            }
        }
        if(all){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

