#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long h;
    cin >> h;

    long long t = 0;
    int i = 0;
    while(t <= h){
        t += pow(2,i);
        i++;
    }

    cout << i << endl;
}

