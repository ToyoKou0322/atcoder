#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> s(8);
    for(int i=0;i < 8;i++){
        cin >> s[i];
    }
    
    string a = "abcdefgh";
    for(int i=0;i < 8;i++){
        for(int j=0;j < 8;j++){
            if(s[i][j] == '*'){
                cout << a[j] << 8-i << endl;
                return 0;
            }
        }
    }
}

