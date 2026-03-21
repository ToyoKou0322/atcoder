#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {

    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; ++i) {
        cin >> S[i];
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    int ans = 0;

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (S[i][j] == '.' && !visited[i][j]) {
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;

                bool is_surrounded = true;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    if (x == 0 || x == H - 1 || y == 0 || y == W - 1) {
                        is_surrounded = false;
                    }

                    for (int k = 0; k < 4; ++k) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
                            if (S[nx][ny] == '.' && !visited[nx][ny]) {
                                visited[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }
                }

                if (is_surrounded) {
                    ans++;
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
