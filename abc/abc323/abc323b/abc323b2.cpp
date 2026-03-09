#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    // 各プレイヤーの情報を {勝ち数, プレイヤー番号} のペアで保存する配列
    vector<pair<int, int>> players(n);
    
    for(int i = 0; i < n; i++) {
        int wins = 0;
        // i番目のプレイヤーの勝ち数を数える
        for(int j = 0; j < n; j++) {
            if(s[i][j] == 'o') {
                wins++;
            }
        }
        // 勝ち数と、プレイヤー番号(1始まりなので i+1) をセットにして保存
        players[i] = {wins, i + 1}; 
    }

    // std::sort と ラムダ式(カスタムの並び替えルール)を使ってソート
    sort(players.begin(), players.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first; // 勝ち数が違うなら、勝ち数が多い方(降順)を前にする
        } else {
            return a.second < b.second; // 勝ち数が同じなら、番号が小さい方(昇順)を前にする
        }
    });

    // ソートされた順にプレイヤー番号を出力
    for(int i = 0; i < n; i++) {
        cout << players[i].second << " ";
    }
    cout << endl;

    return 0;
}
