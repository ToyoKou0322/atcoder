#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    string s,t;
    cin >> s >> t;

    int n = s.length();
    int k = t.length();

    vector<int> dp(k + 1, 0);
    long long ans = 0;

    for (int j = 1; j <= n; ++j) {
        for (int i = k; i >= 1; --i) {
            if (s[j - 1] == t[i - 1]) {
                if (i == 1) {
                    dp[i] = j;
                } else {
                    dp[i] = max(dp[i], dp[i - 1]);
                }
            }
        }
        ans += (j - dp[k]);
    }

    cout << ans << endl;

    return 0;
}
