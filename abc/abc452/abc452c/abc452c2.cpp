#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool exist[11][11][26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    
    int m;
    cin >> m;
    vector<string> s(m);
    
    for(int i = 0; i < m; i++){
        cin >> s[i];
        int len = s[i].size();
        for(int j = 0; j < len; j++){
            exist[len][j + 1][s[i][j] - 'a'] = true;
        }
    }

    for(int i = 0; i < m; i++){
        if(s[i].size() != n){
            cout << "No\n";
            continue;
        }
        
        bool ok = true;
        for(int j = 0; j < n; j++){
            int req_len = a[j];
            int req_pos = b[j];
            int req_char = s[i][j] - 'a';
            
            if(!exist[req_len][req_pos][req_char]){
                ok = false;
                break;
            }
        }
        
        if(ok){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    
    return 0;
}
