#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long x;
    cin >> x;
    
    long long a = 1;
    long long y = 1;
    while(true){
        y *= a;
        if(y == x){
            break;
        }
        a++;
    }

    cout << a << endl;
    return 0;
}

