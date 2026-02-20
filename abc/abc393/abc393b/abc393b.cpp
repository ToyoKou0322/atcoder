#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i=1;i < s.size();i++){
        for(int j=0;j+2*i < s.size();j++){
            if(s[j] == 'A' && s[j+i] == 'B' && s[j+i+i] == 'C'){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

