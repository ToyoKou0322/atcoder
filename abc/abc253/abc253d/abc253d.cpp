#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    long long n,a,b;
    cin >> n >> a >> b;

    long long ans = n*(1+n)/2;

    long long an = n / a;
    long long bn = n / b;
    long long abn = n / ((a*b)/gcd(a,b));

    long long c = (a*b)/gcd(a,b);

    long long x = an*(2*a + (an-1)*a)/2;
    long long y = bn*(2*b + (bn-1)*b)/2;
    long long z = abn*(2*c + (abn-1)*c)/2;

    ans -= x+y;
    ans += z;

    cout << ans << endl;
    return 0;
}

