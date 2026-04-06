#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    long long X, Y;
    cin >> N >> X >> Y;

    vector<long long> A(N);
    long long A_max = 0;
    long long A_min = 2e18;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        A_max = max(A_max, A[i]);
        A_min = min(A_min, A[i]);
    }

    long long diff = Y - X;
    long long target_rem = (X * A[0]) % diff;

    for (int i = 0; i < N; ++i) {
        if ((X * A[i]) % diff != target_rem) {
            cout << -1 << "\n";
            return 0;
        }
    }

    if (X * A_max > Y * A_min) {
        cout << -1 << "\n";
        return 0;
    }

    long long W = Y * A_min;
    long long ans = 0;

    for (int i = 0; i < N; ++i) {
        ans += (W - X * A[i]) / diff;
    }

    cout << ans << "\n";

    return 0;
}
