#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long x,c;
    cin >> x >> c;

    long long ans = 0;
    for(long long i=1000;i <= x;i += 1000){
        if((i * c) / 1000 + i <= x){
            ans = max(ans,i);
        }
    }

    cout << ans << endl;
    return 0;
}

