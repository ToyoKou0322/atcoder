#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long count_snake(long long X) {
    string S = to_string(X);
    int N = S.length();

    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(2, vector<long long>(10, 0)));

    dp[0][0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int smaller = 0; smaller < 2; smaller++) {
            for (int lead = 0; lead < 10; lead++) {
                if (dp[i][smaller][lead] == 0) continue;

                int limit = smaller ? 9 : (S[i] - '0');

                for (int d = 0; d <= limit; d++) {
                    int nxt_smaller = smaller || (d < limit);
                    int nxt_lead = lead;

                    if (lead == 0) {
                        if (d != 0) {
                            nxt_lead = d;
                        }
                    } else {
                        if (d >= lead) continue; 
                    }
                    dp[i + 1][nxt_smaller][nxt_lead] += dp[i][smaller][lead];
                }
            }
        }
    }

    long long res = 0;
    for (int smaller = 0; smaller < 2; smaller++) {
        for (int lead = 1; lead <= 9; lead++) {
            res += dp[N][smaller][lead];
        }
    }

    return res - 9;
}

int main() {
    long long L, R;
    if (cin >> L >> R) {
        cout << count_snake(R) - count_snake(L - 1) << "\n";
    }
    return 0;
}
