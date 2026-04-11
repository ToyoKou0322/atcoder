#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool a = true;
    for(int i=0;i < n;i++){
        if(s[i] != 'o'){
            a = false;
        }
        if(!a){
            cout << s[i];
        }
    }
}

