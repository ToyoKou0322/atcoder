#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long cross_product(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
    long long dx1 = x2 - x1;
    long long dy1 = y2 - y1;
    long long dx2 = x3 - x2;
    long long dy2 = y3 - y2;

    return dx1 * dy2 - dy1 * dx2;
}

int main(){
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    if(cross_product(a,b,c,d,e,f) < 0){
        cout << "No" << endl;
        return 0;
    }

    if(cross_product(c,d,e,f,g,h) < 0){
        cout << "No" << endl;
        return 0;
    }

    if(cross_product(e,f,g,h,a,b) < 0){
        cout << "No" << endl;
        return 0;
    }

    if(cross_product(g,h,a,b,c,d) < 0){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}

