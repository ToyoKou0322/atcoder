#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long reconstruct(long long n){
    long long val = 1;
    long long nn = n;
    while(nn){
        val *= 10;
        nn /= 10;
    }
    return n * val + n;
}

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i=1;i <= 1000000;i++){
        if(reconstruct(i) <= n){
            ans++;
        }else{
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

