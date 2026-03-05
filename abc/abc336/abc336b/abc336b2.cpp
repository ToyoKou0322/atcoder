#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;;i++){
        if(n & (1 << i)){
            cout << i << endl;
            return 0;
        }
    }
}

