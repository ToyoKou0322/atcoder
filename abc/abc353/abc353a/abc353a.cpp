#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h;
    cin >> h;
    for(int i=1;i < n;i++){
        int x;
        cin >> x;
        if(x > h){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

