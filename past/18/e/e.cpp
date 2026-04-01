#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
        for(int j=0;j < c[i];j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        bool ok = true;
        int count = 0;
        vector<int> x(110,0);
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                count++;
                for(int j=0;j < c[i];j++){
                    x[a[i][j]]++;
                }
            }
        }

        if(count < 2){
            continue;
        }

        for(int i=1;i <= 100;i++){
            if(x[i] == count && i % 2 == 0){
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

