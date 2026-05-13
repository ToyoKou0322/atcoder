#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long r;
    cin >> r;

    long long ans = 0;
    for(long long i=0;i < r;i++){
        long long ok = -1;
        long long ng = r;

        while(abs(ok - ng) > 1){
            long long mid = ok + (ng - ok) / 2;

            if((2*i+1)*(2*i+1) + (2*mid+1)*(2*mid+1) <= 4*r*r){
                ok = mid;
            }else{
                ng = mid;
            }
        }
        ans += ok;
    }

    ans *= 4;
    ans++;
    cout << ans << endl;
    return 0;
}

