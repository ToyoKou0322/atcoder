#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a[i] = x % k; 
    }

    sort(a.begin(), a.end());

    long long max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        long long gap = a[i+1] - a[i];
        max_gap = max(max_gap, gap);
    }

    long long boundary_gap = k - a[n-1] + a[0];
    max_gap = max(max_gap, boundary_gap);

    long long ans = k - max_gap;
    
    cout << ans << "\n";

    return 0;
}
