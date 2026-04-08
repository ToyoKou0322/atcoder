#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1;
    long long mod = 1e9+7;
    for(long long i=1;i <= n;i++){
        ans *= i;
        ans %= mod;
    }

    cout << ans << endl;
}

