#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    
    while(n > 0){
        if(n % 2 == 0){
            count++;
        }else{
            break;
        }
        n /= 2;
    }

    cout << count << endl;
    return 0;
}

