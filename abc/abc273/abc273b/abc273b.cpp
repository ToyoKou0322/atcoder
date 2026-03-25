#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long x,k;
    cin >> x >> k;

    for(int i=0;i < k;i++){
        x += 5 * pow(10,i);
        x /= pow(10,i+1);
        x *= pow(10,i+1);
    }

    cout << x << endl;
    return 0;
}

