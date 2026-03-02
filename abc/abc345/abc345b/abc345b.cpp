#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long x;
    cin >> x;

    long long a = x / 10;
    if(a * 10 < x){
        cout << a + 1 << endl;
    }else if(a * 10 == x){
        cout << a << endl;
    }else if(a * 10 > x){
        cout << a << endl;
    }

    return 0;
}
