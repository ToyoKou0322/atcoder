#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    string target = "snuke";

    // 8方向の変化量を定義 (上、右上、右、右下、下、左下、左、左上)
    // dy は縦方向(行)、dx は横方向(列)の変化
    int dy[] = {-1, -1,  0,  1,  1,  1,  0, -1};
    int dx[] = { 0,  1,  1,  1,  0, -1, -1, -1};

    // 全てのマスをスタート地点として試す
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            
            // 8方向それぞれについて調べる
            for (int d = 0; d < 8; d++) {
                string z = "";
                
                // 選んだ方向(d)に向かって、5文字分進む
                for (int k = 0; k < 5; k++) {
                    int ny = i + dy[d] * k; // k歩進んだ先のY座標
                    int nx = j + dx[d] * k; // k歩進んだ先のX座標

                    // マス目の外にはみ出していないかチェック
                    if (ny >= 0 && ny < h && nx >= 0 && nx < w) {
                        z += s[ny][nx];
                    }
                }

                // "snuke" と完全に一致した場合
                if (z == target) {
                    // もう一度同じ計算をして、座標を出力する
                    for (int k = 0; k < 5; k++) {
                        int ny = i + dy[d] * k;
                        int nx = j + dx[d] * k;
                        // 問題文の指定は 1-indexed (1始まり) なので +1 して出力
                        cout << ny + 1 << " " << nx + 1 << endl;
                    }
                    return 0;
                }
            }
            
        }
    }
    return 0;
}
