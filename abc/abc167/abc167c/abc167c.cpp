#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<long long> c(n);
    vector<vector<long long>> a(n,vector<long long>(m));
    for(int i=0;i < n;i++){
        cin >> c[i];
        for(int j=0;j < m;j++){
            cin >> a[i][j];
        }
    }

    long long ans = INT_MAX;
    bool able = false;
    for(int bit=0;bit < (1 << n);bit++){
        vector<long long> skill(m,0);
        long long csum = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                csum += c[i];
                for(int j=0;j < m;j++){
                    skill[j] += a[i][j];
                }
            }
        }
        bool ok = true;
        for(int i=0;i < m;i++){
            if(skill[i] < x){
                ok = false;
            }
        }
        if(ok){
            able = true;
            ans = min(ans,csum);
        }
    }

    if(!able){
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}

