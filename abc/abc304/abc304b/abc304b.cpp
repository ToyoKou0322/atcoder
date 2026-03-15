#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n <= pow(10,3)-1){
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,4)-1){
        n -= n % 10;
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,5)-1){
        n -= n % 100;
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,6)-1){
        n -= n % 1000;
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,7)-1){
        n -= n % 10000;
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,8)-1){
        n -= n % 100000;
        cout << n << endl;
        return 0;
    }

    if(n <= pow(10,9)-1){
        n -= n % 1000000;
        cout << n << endl;
        return 0;
    }
}

