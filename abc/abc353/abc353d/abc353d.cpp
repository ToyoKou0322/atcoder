#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long MOD = 998244353;

    vector<long long> D(N);
    for (int i = 0; i < N; ++i) {
        long long temp = A[i];
        long long p10 = 1;
        while (temp > 0) {
            p10 = (p10 * 10) % MOD;
            temp /= 10;
        }
        D[i] = p10;
    }

    vector<long long> sufD(N + 1, 0);
    for (int i = N - 1; i >= 0; --i) {
        sufD[i] = (sufD[i + 1] + D[i]) % MOD;
    }

    long long ans = 0;

    for (int i = 0; i < N - 1; ++i) {
        long long term1 = (A[i] % MOD) * sufD[i + 1] % MOD;
        ans = (ans + term1) % MOD;
    }

    for (long long j = 1; j < N; ++j) {
        long long term2 = (A[j] % MOD) * j % MOD;
        ans = (ans + term2) % MOD;
    }

    cout << ans << "\n";

    return 0;
}
