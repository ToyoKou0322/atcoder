#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;

    ans += max(0LL,n - 1000 + 1);
    ans += max(0LL,n - 1000000 + 1);
    ans += max(0LL,n - 1000000000 + 1);
    ans += max(0LL,n - 1000000000000 + 1);
    ans += max(0LL,n - 1000000000000000  + 1);

    cout << ans << endl;
    return 0;
}

