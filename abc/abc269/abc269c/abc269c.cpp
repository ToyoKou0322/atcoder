#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

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

int main(){
    long long n;
    cin >> n;

    string s = convert_base(to_string(n),10,2);

    int c = 0;
    vector<int> where(100);
    for(int i=0;i < s.size();i++){
        if(s[i] == '1'){
            c++;
            where[c] = i;
        }
    }

    vector<long long> ans;

    for(int bit=0;bit < (1 << c);bit++){
        string t = s;
        for(int i=0;i < c;i++){
            if(bit & (1 << i)){
                t[where[i+1]] = '0';
            }
        }
        ans.push_back(stoll(convert_base(t,2,10)));
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i < ans.size();i++){
        cout << ans[i] << endl;
    }
}
