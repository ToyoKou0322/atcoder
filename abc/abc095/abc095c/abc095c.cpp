#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    long long abset = a + b;
    long long ab2 = c*2;
    long long ans = 0;
    if(abset >= ab2){
        ans = ab2 * min(x,y);
        if(x > y){
            if(a < ab2){
                ans += a * (x-y);
            }else{
                ans += ab2 * (x-y);
            }
        }else{
            if(b < ab2){
                ans += b * (y-x);
            }else{
                ans += ab2 * (y-x);
            }
        }
    }else{
        ans = a * x + b * y;
    }

    cout << ans << endl;
    return 0;
}

