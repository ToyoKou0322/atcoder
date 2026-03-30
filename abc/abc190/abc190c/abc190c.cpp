#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m),b(m);
    for(int i=0;i < m;i++){
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    vector<int> c(k),d(k);
    for(int i=0;i < k;i++){
        cin >> c[i] >> d[i];
    }

    int ans = 0;
    for(int bit=0;bit < (1 << k);bit++){
        vector<bool> x(n+1,false);
        for(int i=0;i < k;i++){
            if(bit & (1 << i)){
                x[c[i]] = true;
            }else{
                x[d[i]] = true;
            }
        }

        int count = 0;
        for(int i=0;i < m;i++){
            if(x[a[i]] && x[b[i]]){
                count++;
            }
        }
        ans = max(ans,count);
    }

    cout << ans << endl;
    return 0;
}

