#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            int c = 0;
            for(int k=0;k < m;k++){
                if(s[i][k] == 'o' || s[j][k] == 'o'){
                    c++;
                }
            }
            if(c == m){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

