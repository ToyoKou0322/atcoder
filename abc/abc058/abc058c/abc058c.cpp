#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<vector<int>> x(n,vector<int>(26));
    for(int i=0;i < n;i++){
        for(int j=0;j < s[i].size();j++){
            x[i][s[i][j]-'a']++;
        }
    }

    string ans = "";
    for(int i=0;i < 26;i++){
        int a = 100000;
        for(int j=0;j < n;j++){
            a = min(x[j][i],a);
        }
        char c = i + 'a';
        ans += string(a,c);
    }

    cout << ans << endl;
    return 0;
}

