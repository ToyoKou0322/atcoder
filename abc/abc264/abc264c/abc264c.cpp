#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    for(int i = 0; i < h1; i++) {
        for(int j = 0; j < w1; j++) {
            cin >> a[i][j];
        }
    }

    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    for(int i = 0; i < h2; i++) {
        for(int j = 0; j < w2; j++) {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < (1 << h1); i++) {
        for(int j = 0; j < (1 << w1); j++) {
            
            vector<int> row_idx, col_idx;
            
            for(int r = 0; r < h1; r++) {
                if(i & (1 << r)) row_idx.push_back(r);
            }
            for(int c = 0; c < w1; c++) {
                if(j & (1 << c)) col_idx.push_back(c);
            }

            if(row_idx.size() != h2 || col_idx.size() != w2) continue;

            bool match = true;
            for(int r = 0; r < h2; r++) {
                for(int c = 0; c < w2; c++) {
                    if(a[row_idx[r]][col_idx[c]] != b[r][c]) {
                        match = false;
                        break;
                    }
                }
                if(!match) break;
            }

            if(match) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
