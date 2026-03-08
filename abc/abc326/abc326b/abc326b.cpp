#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n <= 919){
        string x = to_string(n);
        if((x[0] - '0') * (x[1] - '0') == x[2] - '0'){
            cout << n << endl;
            return 0;
        }
        n++;
    }
}

