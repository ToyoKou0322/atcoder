#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i=1;i*i <= 2*n;i++){
        long long x = (2 * n) - (i*i) + i;
        long long y = 2 * i;
        if(x % y == 0){
            ans += 2;
        }
    }

    cout << ans << endl;
}

