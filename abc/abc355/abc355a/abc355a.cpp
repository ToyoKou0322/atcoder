#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a != b){
        for(int i=1;i <= 3;i++){
            if(i != a && i != b){
                cout << i << endl;
            }
        }
    }else{
        cout << -1 << endl;
    }

    return 0;
}

