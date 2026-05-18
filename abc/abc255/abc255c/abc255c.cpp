#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long x,a,d,n;
    cin >> x >> a >> d >> n;

    if(d == 0){
        cout << abs(x - a) << endl;
        return 0; 
    }

    x -= a;
    if(d > 0){
        long long r = abs(x) % d;
        long long l = d * (n-1);

        if(x > l){
            cout << abs(l - x) << endl;
        }else if(x < 0){
            cout << abs(x) << endl;
        }else{
            cout << min(d-r,r) << endl;
        }
    }else{
        long long r = abs(x) % abs(d);
        long long l = d * (n-1);

        if(x > 0){
            cout << abs(x) << endl;
        }else if(x < l){
            cout << abs(l - x) << endl;
        }else{
            cout << min(abs(d)-abs(r),r) << endl;
        }
    }
    return 0;
}

