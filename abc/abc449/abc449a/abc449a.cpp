#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double d;
    cin >> d;

    double x = d / 2;
    double ans = x * x * M_PI;

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}

