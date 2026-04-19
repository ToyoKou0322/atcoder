#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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

    if(n > 1 && num[1] == -1){
        num[1] = 1;
    }
    if(n == 1 && num[1] == -1){
        num[1] = 0;
    }

    for(int i=1;i <= n;i++){
        if(num[i] == -1){
            num[i] = 0;
        }
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        ans = ans * 10 + num[i];
    }

    cout << ans << endl;
    return 0;
}

