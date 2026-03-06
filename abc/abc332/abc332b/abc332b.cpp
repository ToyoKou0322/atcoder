#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int k,g,m;
    cin >> k >> g >> m;

    int a = 0;
    int b = 0;

    for(int i=0;i < k;i++){
        if(a == g){
            a = 0;
        }else if(b == 0){
            b = m;
        }else{
            if(a + b >= g){
                b -= g - a;
                a = g;
            }else{
                a += b;
                b = 0;
            }
        }
    }

    cout << a << " " << b << endl;
    return 0;
}

