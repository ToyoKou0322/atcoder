#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> r(n),c(n);
    for(int i=0;i < n;i++){
        cin >> r[i] >> c[i];
    }

    long long rmax = LLONG_MIN,rmin = LLONG_MAX,cmax = LLONG_MIN,cmin = LLONG_MAX;
    for(int i=0;i < n;i++){
        rmax = max(rmax,r[i]);
        rmin = min(rmin,r[i]);
        cmax = max(cmax,c[i]);
        cmin = min(cmin,c[i]);
    }

    long long ans = (max(rmax - rmin,cmax - cmin) + 1) / 2;  

    cout << ans << endl;

    return 0;
}

