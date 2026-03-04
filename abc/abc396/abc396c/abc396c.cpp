#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> b(n),w(m);
    long long bp = 0;
    long long wp = 0;
    for(int i=0;i < n;i++){
        cin >> b[i];
        if(b[i] > 0){
            bp++;
        }
    }
    for(int i=0;i < m;i++){
        cin >> w[i];
        if(w[i] > 0){
            wp++;
        }
    }

    sort(b.rbegin(),b.rend());
    sort(w.rbegin(),w.rend());

    long long ans = 0;
    if(bp >= wp){
        for(int i=0;i < n;i++){
            if(b[i] > 0){
                ans += b[i];
            }else{
                break;
            }
        }
        for(int i=0;i < m;i++){
            if(w[i] > 0){
                ans += w[i];
            }else{
                break;
            }
        }
        cout << ans << endl;
        return 0;
    }else{
        int s = min(n,m);
        for(int i=0;i < s;i++){
            if(b[i] + w[i] > 0){
                ans += b[i] + w[i];
            }else{
                break;
            }
        }
        cout << ans << endl;
        return 0;
    }
}

