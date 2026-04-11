#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int N;
    cin >> N;
    string T_prime;
    cin >> T_prime;

    vector<int> ans;
    int len_T = T_prime.length();

    for (int i = 1; i <= N; ++i) {
        string S;
        cin >> S;
        int len_S = S.length();

        if (abs(len_S - len_T) > 1) {
            continue;
        }

        int a = 0;
        while (a < len_S && a < len_T && S[a] == T_prime[a]) {
            a++;
        }

        int b = 0;
        while (b < len_S && b < len_T && S[len_S - 1 - b] == T_prime[len_T - 1 - b]) {
            b++;
        }

        bool ok = false;
        if (len_S == len_T) {
            if (a + b >= len_S - 1) ok = true;
        } else if (len_S + 1 == len_T) {
            if (a + b >= len_S) ok = true;
        } else if (len_S - 1 == len_T) {
            if (a + b >= len_T) ok = true;
        }

        if (ok) {
            ans.push_back(i);
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
