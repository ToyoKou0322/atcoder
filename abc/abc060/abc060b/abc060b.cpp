#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int r = a % b;
    int x = r;
    vector<bool> seen(200);
    while(!seen[r]){
        seen[r] = true;
        if(r == c){
            cout << "YES" << endl;
            return 0;
        }

        r += x;
        r %= b;
    }

    cout << "NO" << endl;
    return 0;
}

