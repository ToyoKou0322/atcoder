#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n;i > 0;i--){
        if(i == 1){
            cout << 1;
            break;
        }
        cout << i << ',';
    }
    cout << endl;
    return 0;
}

