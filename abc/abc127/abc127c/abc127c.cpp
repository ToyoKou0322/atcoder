#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1);
    for(int i=0;i < m;i++){
        int l,r;
        cin >> l >> r;
        a[l-1]++;
        a[r]--;
    }

    vector<int> imos(n+2);
    for(int i=0;i < n+1;i++){
        imos[i+1] = imos[i] + a[i];
    }

    int ans = 0;
    for(int i=0;i < imos.size();i++){
        if(imos[i] == m){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

