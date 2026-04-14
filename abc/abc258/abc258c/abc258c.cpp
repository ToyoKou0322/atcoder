#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    int top = 0;
    while(q--){
        int type,x;
        cin >> type >> x;
        if(type == 1){
            top = (top - x + n) % n;
        }else{
            cout << s[(top+x-1)%n] << endl;
        }
    }
    return 0;
}

