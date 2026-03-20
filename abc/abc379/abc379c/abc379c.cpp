#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    int m;
    cin >> n >> m;
    vector<pair<int, long long>> xa(m);
    for (int i = 0; i < m; ++i) {
        cin >> xa[i].first;
    }
    for (int i = 0; i < m; ++i) {
        cin >> xa[i].second;
    }
    sort(xa.begin(), xa.end());
    long long sum = 0, sum_idx = 0;
    for (int i = 0; i < m; ++i) {
        if (sum < xa[i].first - 1) {
            cout << -1 << endl;
            return 0;
        }
        sum += xa[i].second;
        sum_idx += xa[i].second * xa[i].first;
    }
    if (sum != n) {
        cout << -1 << endl;
        return 0;
    }
    cout << n * (n + 1) / 2 - sum_idx << endl;
}

