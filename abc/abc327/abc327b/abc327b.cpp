#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long b;
    cin >> b;

    for(int i=1;i <= 15;i++){
        long long x = 1;
        for(int j=0;j < i;j++){
            x *= i;
        }
        if(x == b){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

