#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }

    vector<string> x(m+1);
    for(int i=0;i < n;i++){
        x[c[i]].push_back(s[i]);
    }

    for(int i=1;i <= m;i++){
        x[i] = x[i].back() + x[i];
    }

    vector<int> curr(m+1,0);

    string ans = "";
    for(int i=0;i < n;i++){
        s[i] = x[c[i]][curr[c[i]]];
        curr[c[i]]++;
    }

    cout << s << endl;
}

