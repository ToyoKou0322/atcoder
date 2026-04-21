#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    for(long long x=1;x <= n-1;x++){
        long long y = n - x;
        long long c = 0;
        for(long long i=1;i*i <= x;i++){
            if(x % i == 0){
                if(x / i == i){
                    c += 1;
                }else{
                    c += 2;
                }
            }
        }
        long long c2 = 0;
        for(long long i=1;i*i <= y;i++){
            if(y % i == 0){
                if(y / i == i){
                    c2 += 1;
                }else{
                    c2 += 2;
                }
            }
        }
        ans += c*c2;
    }

    cout << ans << endl;
    return 0;

}

