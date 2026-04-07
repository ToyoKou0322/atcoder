#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    long double n,k;
    cin >> n >> k;

    vector<long double> x;
    long double y = 1;
    while(y <= 1e6){
        x.push_back(y);
        y *= 2;
    }

    long double ans = 0;
    for(long long i=1;i <= n;i++){
        long double target = k / i;
        auto it = lower_bound(x.begin(),x.end(),target);
        int d = distance(x.begin(),it);
        ans += (1/n) * powl(0.5,d);
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}

