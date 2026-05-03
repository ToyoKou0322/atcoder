#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c1 = 0;
    for(char c : s){
        if(c == '1') c1++;
    }

    int now = 0;
    long long ans = 0;
    for(char c : s){
        if(c == '0'){
            ans += min(now,c1 - now);
        }else{
            now++;
        }
    }

    cout << ans << endl;
}

