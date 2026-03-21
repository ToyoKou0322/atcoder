#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n),t(m);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }
    for(int i=0;i < m;i++){
        cin >> t[i];
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        for(int j=0;j < m;j++){
            if(s[i].substr(3,3) == t[j]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

