#include <iostream>

using namespace std;

int main() {

    int n;
    if (!(cin >> n)) return 0;

    long long t = 0;

    for (int i = 0; i < n; ++i) {
        long long h;
        cin >> h;

        long long q = h / 5;
        t += q * 3;
        h %= 5;

        while (h > 0) {
            t++;
            if (t % 3 == 0) {
                h -= 3;
            } else {
                h -= 1;
            }
        }
    }

    cout << t << "\n";

    return 0;
}
