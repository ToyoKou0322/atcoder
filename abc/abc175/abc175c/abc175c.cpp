#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long x,k,d;
    cin >> x >> k >> d;

    x = abs(x);
    long long c = x / d;
    if(c >= k){
        cout << x - k*d << endl;
    }else{
        long long rem = k - c;
        long long m = x % d;
        if(rem % 2 == 0){
            cout << m << endl;
        }else{
            cout << abs(m-d) << endl;
        }
    }
    return 0;
}

