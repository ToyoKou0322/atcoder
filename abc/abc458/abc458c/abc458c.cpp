#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long ans = 0;
    int n = s.size();
    for(int i=0;i < n;i++){
        if(s[i] == 'C'){
            ans++;
            int x = i;
            int y = n - i - 1;
            int z = min(x,y);
            ans += z;
        }
    }

    cout << ans << endl;
    return 0;
}

