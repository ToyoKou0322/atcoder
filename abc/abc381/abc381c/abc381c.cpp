#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_len = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '/') {
            
            int l = 0;
            while (i - 1 - l >= 0 && s[i - 1 - l] == '1') {
                l++;
            }
            
            int r = 0;
            while (i + 1 + r < n && s[i + 1 + r] == '2') {
                r++;
            }
            
            int current_len = 1 + 2 * min(l, r);
            max_len = max(max_len, current_len);
        }
    }

    cout << max_len << endl;

    return 0;
}
