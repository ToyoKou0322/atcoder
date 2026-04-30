#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    if ((sx + sy) % 2 != 0) {
        sx--;
    }
    if ((tx + ty) % 2 != 0) {
        tx--;
    }

    long long dx = abs(tx - sx);
    long long dy = abs(ty - sy);

    long long ans = dy + max(0LL, dx - dy) / 2;

    cout << ans << endl;
    return 0;
}
