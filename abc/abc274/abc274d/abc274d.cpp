#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    const int OFFSET = 10000;
    const int MAX_POS = 20005;

    if (abs(x) > OFFSET || abs(y) > OFFSET) {
        cout << "No\n";
        return 0;
    }

    vector<int> x_moves, y_moves;
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            x_moves.push_back(a[i]);
        } else {
            y_moves.push_back(a[i]);
        }
    }

    int nx = x_moves.size();
    int ny = y_moves.size();

    vector<vector<bool>> dp_x(nx + 1, vector<bool>(MAX_POS, false));
    vector<vector<bool>> dp_y(ny + 1, vector<bool>(MAX_POS, false));

    dp_x[0][OFFSET + a[0]] = true; 
    dp_y[0][OFFSET] = true;

    for (int i = 0; i < nx; ++i) {
        int move = x_moves[i];
        for (int j = 0; j < MAX_POS; ++j) {
            if (dp_x[i][j]) {
                if (j + move < MAX_POS) dp_x[i + 1][j + move] = true;
                if (j - move >= 0)      dp_x[i + 1][j - move] = true;
            }
        }
    }

    for (int i = 0; i < ny; ++i) {
        int move = y_moves[i];
        for (int j = 0; j < MAX_POS; ++j) {
            if (dp_y[i][j]) {
                if (j + move < MAX_POS) dp_y[i + 1][j + move] = true;
                if (j - move >= 0)      dp_y[i + 1][j - move] = true;
            }
        }
    }

    if (dp_x[nx][OFFSET + x] && dp_y[ny][OFFSET + y]) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
