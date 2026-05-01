#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;
long long n,m,k;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){
    return a / gcd(a,b) * b;
}

bool isOK(long long x){
    long long count = x / n + x / m - 2*(x / lcm(n,m));
    
    return count >= k;
}

int main(){
    cin >> n >> m >> k;

    long long ng = 0;
    long long ok = LLONG_MAX;

    while(abs(ok-ng) > 1){
        long long mid = (ok + ng) / 2;

        if(isOK(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

