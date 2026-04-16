#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    int N;
    long long K;
    cin >> N >> K;

    long long current_sum = 0;
    long long ans = 0;

    map<long long, long long> sum_counts;
    
    sum_counts[0] = 1;

    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        
        current_sum += a;

        long long target = current_sum - K;
        if (sum_counts.count(target)) {
            ans += sum_counts[target];
        }

        sum_counts[current_sum]++;
    }

    cout << ans << "\n";

    return 0;
}
