#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <climits>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    vector<bool> light(n+1,false);
    for(int i=0;i < k;i++){
        cin >> a[i];
        light[a[i]] = true;
    }
    vector<long double> x(n),y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }

    long double ans = 0;
    for(int i=0;i < n;i++){
        long double m = INT_MAX;
        if(light[i+1]){
            continue;
        }
        for(int j=0;j < n;j++){
            if(light[j+1]){
                long double d = sqrt(powl(x[i]-x[j],2) + powl(y[i]-y[j],2));
                m = min(m,d);
            }
        }
        ans = max(ans,m);
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}
