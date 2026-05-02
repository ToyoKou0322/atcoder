#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;

    for(int i=1;i <= 6;i++){
        for(int j=1;j <= 6;j++){
            for(int k=1;k <= 6;k++){
                if(i+j+k == x){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

