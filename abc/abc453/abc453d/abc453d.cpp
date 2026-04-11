#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

struct State {
    int x, y, dir;
};

struct Prev {
    int x, y, dir;
};

int main() {

    int h, w;
    if (!(cin >> h >> w)) return 0;

    vector<string> s(h);
    int sx = -1, sy = -1;
    for (int i = 0; i < h; i++) {
        cin >> s[i];
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'S') {
                sx = i; 
                sy = j;
            }
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    string dir_char = "UDLR";

    vector<vector<vector<bool>>> visited(h, vector<vector<bool>>(w, vector<bool>(4, false)));
    vector<vector<vector<Prev>>> pre(h, vector<vector<Prev>>(w, vector<Prev>(4, {-1, -1, -1})));

    queue<State> q;

    for (int i = 0; i < 4; i++) {
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if (nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] != '#') {
            visited[nx][ny][i] = true;
            pre[nx][ny][i] = {sx, sy, -1};
            q.push({nx, ny, i});
        }
    }

    int gx = -1, gy = -1, gdir = -1;

    while (!q.empty()) {
        State cur = q.front();
        q.pop();

        int x = cur.x;
        int y = cur.y;
        int p = cur.dir;

        if (s[x][y] == 'G') {
            gx = x;
            gy = y;
            gdir = p;
            break;
        }

        for (int i = 0; i < 4; i++) {
            if (s[x][y] == 'o' && i != p) continue;
            if (s[x][y] == 'x' && i == p) continue;

            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] != '#') {
                if (!visited[nx][ny][i]) {
                    visited[nx][ny][i] = true;
                    pre[nx][ny][i] = {x, y, p};
                    q.push({nx, ny, i});
                }
            }
        }
    }

    if (gx != -1) {
        cout << "Yes\n";
        string ans = "";
        int cx = gx, cy = gy, cdir = gdir;
        
        while (cx != sx || cy != sy) {
            ans += dir_char[cdir];
            Prev p = pre[cx][cy][cdir];
            cx = p.x;
            cy = p.y;
            cdir = p.dir;
        }
        
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
