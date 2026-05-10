#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;
    long long K;
    cin >> N >> K;

    vector<double> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    double left = 0.0;
    double right = 2e9;

    for (int iter = 0; iter < 100; ++iter) {
        double mid = (left + right) / 2.0;
        
        long long total_seats = 0;
        for (int i = 0; i < N; ++i) {
            total_seats += (long long)(A[i] / mid);
        }

        if (total_seats >= K) {
            left = mid;
        } 
        else {
            right = mid;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << (long long)(A[i] / left) << (i == N - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
