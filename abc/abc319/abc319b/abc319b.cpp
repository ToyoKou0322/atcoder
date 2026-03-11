#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    string ans = "";
    for(int i=0;i <= n;i++){
        bool ok = false;
        for(int j=1;j <= 9;j++){
            if(n % j == 0 && i % (n/j) == 0){
                ok = true;
                ans += j + '0';
                break;
            }
        }
        if(!ok){
            ans += '-';
        }
    }

    cout << ans << endl;
    return 0;
}

