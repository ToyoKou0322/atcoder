#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    if(x*y < 0){
        cout << abs(x) << endl;
        return 0;
    }else{
        if(abs(x) > abs(y)){
            if(z*x > 0){
                if(abs(z) < abs(y)){
                    cout << abs(x) << endl;
                    return 0;
                }else{
                    cout << -1 << endl;
                    return 0;
                }
            }else{
                cout << abs(z)*2 + abs(x) << endl;
                return 0;
            }
        }else{
            cout << abs(x) << endl;
            return 0;
        }
    }

}
