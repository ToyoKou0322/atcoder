#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> c[i][j];
        }
    }

    vector<int> a(3), b(3);

    a[0] = 0;

    for (int j = 0; j < 3; ++j) {
        b[j] = c[0][j] - a[0];
    }

    for (int i = 1; i < 3; ++i) {
        a[i] = c[i][0] - b[0];
    }

    bool is_correct = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (c[i][j] != a[i] + b[j]) {
                is_correct = false; 
            }
        }
    }

    if (is_correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
