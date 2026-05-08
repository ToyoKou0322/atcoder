#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    string ans = "";
    string x = "abcdefghijklmnopqrstuvwxyz";
    while(n > 0){
        ans = x[(n-1)%26] + ans;
        n = (n-1)/26;
    }

    cout << ans << endl;
    return 0;
}

