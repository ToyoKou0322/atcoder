#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;

    long long ans = 0;

    long long x = min(n,m / 2);

    n -= x;
    m -= x*2;

    ans += x;

    ans += m / 4;

    cout << ans << endl;
    return 0;
}

