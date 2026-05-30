import * as fs from 'fs';

function main() {
    // 標準入力から全ての入力を読み込み、空白または改行で分割する
    const input = fs.readFileSync('/dev/stdin', 'utf-8').trim().split(/\s+/);

    if (input.length < 3) return;

    // 入力値を数値として取得
    const N = parseInt(input[0], 10);
    const L = parseInt(input[1], 10);
    const R = parseInt(input[2], 10);

    // 1からNまでの数列Aを作成
    const A = Array.from({length: N}, (_, i) => i + 1);

    // 配列は0番目から始まるため、LとRのインデックスを調整（-1する）
    // 逆順にする部分を取り出して反転
    const left = A.slice(0, L - 1);
    const mid = A.slice(L - 1, R).reverse();
    const right = A.slice(R);

    // 配列を結合して、空白区切りの文字列にして出力
    const result = [...left, ...mid, ...right];
    console.log(result.join(' '));
}

main();
