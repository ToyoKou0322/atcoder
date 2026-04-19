#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> s(m),c(m);
    vector<int> num(n+1,-1);
    for(int i=0;i < m;i++){
        cin >> s[i] >> c[i];
        if(num[s[i]] == -1){
            num[s[i]] = c[i];
        }else{
            if(num[s[i]] != c[i]){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    if(n > 1 && num[1] == 0){
        cout << -1 << endl;
        return 0;
    }

    for(int i=0;i <= 999;i++){
        string x = to_string(i);
        if(x.size() != n) continue;

        bool ok = true;
        for(int j=1;j <= n;j++){
            int k = x[j-1] - '0';
            if(num[j] != -1 && k != num[j]){
                ok = false;
            }
        }
        if(ok){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

