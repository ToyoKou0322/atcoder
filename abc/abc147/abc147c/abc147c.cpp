#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> x(n);
    vector<vector<int>> y(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
        for(int j=0;j < a[i];j++){
            int k,l;
            cin >> k >> l;
            x[i].push_back(k);
            y[i].push_back(l);
        }
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        bool ok = true;
        int count = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                count++;
                for(int j=0;j < a[i];j++){
                    if(y[i][j] == 1 && !(bit & (1 << (x[i][j]-1)))){
                        ok = false;
                    }else if(y[i][j] == 0 && (bit & (1 << (x[i][j]-1)))){
                        ok = false;
                    }
                }
            }
        }
        if(ok){
            ans = max(ans,count);
        }
    }
    cout << ans << endl;
    return 0;
}

