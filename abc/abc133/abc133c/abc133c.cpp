#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long l,r;
    cin >> l >> r;

    if(r - l >= 2019){
        cout << 0 << endl;
        return 0;
    }

    long long ans = 2019;
    for(long long i = l;i < r;i++){
        for(long long j = i+1;j <= r;j++){
            long long mod = (i * j) % 2019;
            ans = min(ans,mod);
        }
    }

    cout << ans << endl;
    return 0;
}

