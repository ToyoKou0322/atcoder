#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long l, r, d, u;
    cin >> l >> r >> d >> u;

    long long even = 0;
    if((r - l + 1) % 2 == 0){
        even = (r - l + 1) / 2;
    }else{
        if(abs(l) % 2 == 0){
            even = (r - l + 1) / 2 + 1;
        }else{
            even = (r - l + 1) / 2;
        }
    }

    long long ans = 0;
    for(long long i = d; i <= u; i++){
        long long abs_i = abs(i);
        long long left = max(-abs_i, l);
        long long right = min(abs_i, r);
        
        long long e = 0;
        long long o = 0;
        
        if(left <= right){
            if((right - left + 1) % 2 == 0){
                e = (right - left + 1) / 2;
            }else{
                if(abs(left) % 2 == 0){
                    e = (right - left + 1) / 2 + 1;
                }else{
                    e = (right - left + 1) / 2;
                }
            }
            o = (right - left + 1) - e;
        }

        if(abs_i % 2 == 0){
            ans += even + o;
        }else{
            ans += even - e;
        }
    }

    cout << ans << endl;
    return 0;
}
