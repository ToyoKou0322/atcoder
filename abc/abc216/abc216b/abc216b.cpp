#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n <= 120){
        cout << string(n,'A');
        return 0;
    }

    string ans = "";

    while(n > 0){
        if(n % 2 == 0){
            n /= 2;
            ans += 'B';
        }else{
            n--;
            ans += 'A';
        }
        if(n == 1){
            break;
        }
    }
    ans += 'A';

    reverse(ans.begin(),ans.end());

    cout << ans << endl;
    return 0;
}

