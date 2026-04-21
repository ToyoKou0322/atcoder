#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long k;
    cin >> k;

    int c = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] == '1'){
            c++;
        }else{
            break;
        }
    }

    if(c == 0){
        cout << s[0] << endl;
    }else{
        if(k <= c){
            cout << 1 << endl;
        }else{
            cout << s[c] << endl;
        }
    }

    return 0;
}

