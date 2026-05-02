#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    if(m == 0){
        cout << 1 << endl;
        return 0;
    }
    vector<long long> a(m);
    for(int i=0;i < m;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    vector<long long> x;

    if(a[0] - 1 != 0){
        x.push_back(a[0]-1);
    }

    long long d = LLONG_MAX;
    for(int i=1;i < m;i++){
        if(a[i]-a[i-1]-1 == 0) continue;
        d = min(a[i] - a[i-1] - 1,d);
        x.push_back(a[i] - a[i-1] - 1);
    }
    if(n - a.back() != 0){
        x.push_back(n - a.back());
    }
    if(a[0] != 1){
        d = min(a[0] - 1,d);
    }
    if(a.back() != n){
        d = min(n - a.back(),d);
    }

    long long ans = 0;
    for(int i=0;i < x.size();i++){
        ans += (x[i] + d - 1) / d;
    }

    cout << ans << endl;
    return 0;
}

