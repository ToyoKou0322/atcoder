#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int N, A, B;
    cin >> N >> A >> B;

    if (N % 2 != 0) {
        cout << "No\n";
        return;
    }
    if ((A + B) % 2 == 0) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";

    bool transposed = false;
    if (A % 2 != 0) {
        swap(A, B);
        transposed = true;
    }

    string ans = "";
    ans.reserve(N * N);

    for (int r = 1; r <= A - 2; ++r) {
        if (r % 2 == 1) {
            ans.append(N - 1, 'R');
            ans += 'D';
        } else {
            ans.append(N - 1, 'L');
            ans += 'D';
        }
    }

    for (int c = 1; c <= N; ++c) {
        if (c < B) {
            if (c % 2 == 1) ans += "DR";
            else ans += "UR";
        } else if (c == B) {
            ans += "R"; 
        } else {
            if (c % 2 == 1) {
                ans += "U";
                if (c < N) ans += "R";
            } else {
                ans += "D";
                if (c < N) ans += "R";
            }
        }
    }

    if (A < N) {
        ans += "D";
    }

    for (int k = 1; k <= N - A; ++k) {
        if (k % 2 == 1) {
            ans.append(N - 1, 'L');
            if (k < N - A) ans += "D";
        } else {
            ans.append(N - 1, 'R');
            if (k < N - A) ans += "D";
        }
    }

    if (transposed) {
        for (char &ch : ans) {
            if (ch == 'R') ch = 'D';
            else if (ch == 'D') ch = 'R';
            else if (ch == 'L') ch = 'U';
            else if (ch == 'U') ch = 'L';
        }
    }

    cout << ans << "\n";
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
