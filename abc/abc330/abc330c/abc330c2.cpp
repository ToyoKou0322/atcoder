#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long d;
    cin >> d;

    long long ans = d;
    for(long long x = 0;x <= 2000000;x++){
        if(x*x >= d){
            ans = min(ans,x * x - d);
        }else{
            long long y = sqrt(d-x*x);
            ans = min(ans,abs(x*x+y*y-d));
            ans = min(ans,abs(x*x + (y+1)*(y+1)-d));
        }
    }

    cout << ans << endl;
    return 0;
}

