#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    vector<string> ans;
    
    while (S != T) {
        string best_S = "";
        
        for (int i = 0; i < (int)S.length(); i++) {
            if (S[i] != T[i]) {
                string tmp = S;
                tmp[i] = T[i];
                
                if (best_S == "" || tmp < best_S) {
                    best_S = tmp;
                }
            }
        }
        
        S = best_S;
        ans.push_back(S);
    }

    cout << ans.size() << endl;
    for (const string& s : ans) {
        cout << s << endl;
    }

    return 0;
}
