#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0;i <= 100;i++){
        for(int j=0;j <= 100;j++){
            for(int k=0;k <= 100;k++){
                if(string(i,'A') + string(j,'B') + string(k,'C') == s){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

