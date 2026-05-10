#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ok = 1000000000000000001LL;
    long long ng = 0;

    while(abs(ng - ok) > 1){
        long long mid = ng + (ok - ng) / 2;

        if(mid >= n){
            ok = mid;
            continue;
        }

        long long r = n + 1 - mid;
        __int128 s = (__int128_t)r*(r+1) / 2;
        if(n + 1 >= s){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

