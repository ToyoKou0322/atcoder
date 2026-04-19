#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <climits>
#include <cmath>

using namespace std;

int main(){
    long double a,b;
    cin >> a >> b;

    long double l = 0;
    long double r = 1e18;

    for(int i=0;i < 100;i++){
        long double m1 = (l*2+r)/3;
        long double m2 = (l+r*2)/3;

        long double f1 = b*m1 + (a/sqrtl(1+m1));
        long double f2 = b*m2 + (a/sqrtl(1+m2));
        if(f1 < f2){
            r = m2;
        }else{
            l = m1;
        }
    }

    long long opt = (long long)l;
    long double ans = a;

    long long start = max(0LL,opt-5);
    long long end = opt + 5;

    for(long long i = start;i <= end;i++){
        long double current_time = b * (long double)i + (a / sqrt(1.0L + i));
        if(current_time < ans){
            ans = current_time;
        }
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;

}

