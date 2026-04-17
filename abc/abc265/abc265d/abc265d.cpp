#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    long long p, q, r;
    if (!(cin >> n >> p >> q >> r)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> s(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        s[i + 1] = s[i] + a[i];
    }

    bool found = false;
    for (int x = 0; x <= n; ++x) {
        long long target_y = s[x] + p;
        long long target_z = target_y + q;
        long long target_w = target_z + r;

        if (binary_search(s.begin(), s.end(), target_y) &&
            binary_search(s.begin(), s.end(), target_z) &&
            binary_search(s.begin(), s.end(), target_w)) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
