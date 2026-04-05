#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long char_to_val(char c) {
    if ('0' <= c && c <= '9') return c - '0';
    if ('A' <= c && c <= 'Z') return c - 'A' + 10;
    if ('a' <= c && c <= 'z') return c - 'a' + 10;
    return 0;
}

char val_to_char(long long val) {
    if (0 <= val && val <= 9) return '0' + val;
    if (10 <= val && val <= 35) return 'A' + (val - 10);
    return '0';
}

string convert_base(string S, int n, int m) {
    if (S == "0" || S == "") return "0";

    long long base10_val = 0;
    long long multiplier = 1;
    
    for (int i = S.length() - 1; i >= 0; i--) {
        base10_val += char_to_val(S[i]) * multiplier;
        multiplier *= n;
    }

    if (base10_val == 0) return "0";
    
    string res = "";
    while (base10_val > 0) {
        res += val_to_char(base10_val % m);
        base10_val /= m;
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}

int main() {
    long long n;
    cin >> n;
    n--;

    string ans = convert_base(to_string(n),10,5);
    ans = to_string(stoll(ans) * 2);

    cout << ans << endl;
    return 0;
}
