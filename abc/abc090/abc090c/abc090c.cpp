#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;

    if(n == 1 && m == 1){
        cout << 1 << endl;
        return 0;
    }

    if(n == 1 && m > 1){
        cout << m - 2 << endl;
        return 0;
    }

    if(n > 1 && m == 1){
        cout << n - 2 << endl;
        return 0;
    }

    if(n >= 2 && m >= 2){
        cout << (n-2)*(m-2) << endl;
        return 0;
    }
}

