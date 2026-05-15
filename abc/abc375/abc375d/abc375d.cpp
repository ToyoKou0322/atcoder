#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string S;
    cin >> S;

    int n = S.length();
    
    vector<long long> left_count(26, 0);
    vector<long long> right_count(26, 0);

    for (int i = 0; i < n; ++i) {
        right_count[S[i] - 'A']++;
    }

    long long ans = 0;

    for (int j = 0; j < n; ++j) {
        right_count[S[j] - 'A']--;

        for (int c = 0; c < 26; ++c) {
            ans += left_count[c] * right_count[c];
        }

        left_count[S[j] - 'A']++;
    }

    cout << ans << "\n";
    return 0;
}
