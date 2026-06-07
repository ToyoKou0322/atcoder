#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long x,c;
    cin >> x >> c;

    long long a = 1000 + c;

    long long ans = (x / a) * 1000;

    cout << ans << endl;
    return 0;

}

