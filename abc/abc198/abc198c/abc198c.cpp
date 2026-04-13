#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long r, x, y;
    cin >> r >> x >> y;

    long long d = x*x + y*y;
    long long pr = r * r;

    if(d == pr){
        cout << 1 << endl;
    }else if(d < pr){
        cout << 2 << endl;
    }else{
        long long c = (d + pr - 1) / pr;
        long long ans = ceil(sqrt(c));
        cout << ans << endl;
    }
    
    return 0;
}
