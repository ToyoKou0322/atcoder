#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long k = 998244353;
    n %= k;

    if(n < 0){
        n += k;
    }

    cout << n << endl;
    return 0;
}

