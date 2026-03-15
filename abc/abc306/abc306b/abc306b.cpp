#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<long long> a(64);
    for(int i=0;i < 64;i++){
        cin >> a[i];
    }

    unsigned long long ans = 0;
    for(int i=0;i < 64;i++){
        unsigned long long x = a[i];
        for(int j=0;j < i;j++){
            x *= 2;
        }
        ans += x;
    }

    cout << ans << endl;
    return 0;
}

