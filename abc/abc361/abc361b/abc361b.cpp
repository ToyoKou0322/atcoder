#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    int g,h,i,j,k,l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    bool xOverlap = false;
    bool yOverlap = false;
    bool zOverlap = false;

    if(!(g >= d || j <= a)){
        xOverlap = true;
    }

    if(!(h >= e || k <= b)){
        yOverlap = true;
    }

    if(!(i >= f || l <= c)){
        zOverlap = true;
    }

    if(xOverlap && yOverlap && zOverlap){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

