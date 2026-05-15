#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;

    long long c = 0;
    while(a != b){
        if(a > b){
            long long d = a - b;
            c += (d + b - 1) / b;
            a -= ((d + b - 1) / b)*b;
        }else if(a < b){
            long long d = b - a;
            c += (d + a - 1) / a;
            b -= ((d + a - 1) / a)*a;
        }
    }

    cout << c << endl;
    return 0;
}

