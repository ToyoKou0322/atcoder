#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long a,b,c,d,e,f;
    cin  >> a >> b >> c >> d >> e >> f;
    long long m = 998244353;
    a %= m;
    b %= m;
    c %= m;
    d %= m;
    e %= m;
    f %= m;
    long long x = (a * b) % m;
    long long y = (x * c) % m;
    long long i = (d * e) % m;
    long long j = (i * f) % m;
    long long ans = (y - j + m) % m;

    cout << ans << endl;
    return 0;
}

