#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_prime(int n){
    for(int i=2;i < n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    for(int i=a;i <= b;i++){
        bool prime = false;
        for(int j=c;j <= d;j++){
            if(is_prime(i+j)){
                prime = true;
            }
        }
        if(!prime){
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;
    return 0;
}

