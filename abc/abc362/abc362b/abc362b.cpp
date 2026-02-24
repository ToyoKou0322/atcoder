#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int xa,ya,xb,yb,xc,yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    int a = pow(abs(xa-xb),2) + pow(abs(ya-yb),2);
    int b = pow(abs(xb-xc),2) + pow(abs(yb-yc),2);
    int c = pow(abs(xc-xa),2) + pow(abs(yc-ya),2);

    if(a + b == c || a + c == b || b + c == a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

