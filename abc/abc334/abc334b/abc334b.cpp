#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long floor(long long x, long long m){
    long long r = (x % m + m) % m;
    return (x - r) / m;
}

int main(){
    long long a,m,l,r;
    cin >> a >> m >> l >> r;

    l -= a;
    r -= a;
    cout << floor(r,m) - floor(l-1, m) << endl;
    return 0;
}

