#include <iostream>
#include <numeric>

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){
    return a*b / gcd(a,b);
}

using namespace std;

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    long long L = N*M / gcd(N,M);

    long long left = 0;
    long long right = 2000000000000000000LL;

    while (right - left > 1) {
        long long mid = left + (right - left) / 2;
        long long count = (mid / N) + (mid / M) - 2 * (mid / L);

        if (count >= K) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << endl;

    return 0;
}
