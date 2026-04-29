#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long ans = b - a + 1;

    long long c_multi = b/c - (a%c == 0 ? a/c-1 : a/c);
    long long d_multi = b/d - (a%d == 0 ? a/d-1 : a/d);
    long long e = (c*d)/(gcd(c,d));
    long long cd_multi = b/e - (a%e == 0 ? a/e-1 : a/e);

    long long x = c_multi + d_multi - cd_multi;

    ans -= x;

    cout << ans << endl;
    return 0;
}

