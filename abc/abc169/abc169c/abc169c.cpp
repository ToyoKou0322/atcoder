#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long a;
    double b;
    cin >> a >> b;

    long long c = round(b * 100);

    long long x = a * c;

    cout << x / 100 << endl;
    return 0;
}

