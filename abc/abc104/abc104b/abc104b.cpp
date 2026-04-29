#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }

    int c = 0;
    int idx = -1;
    for(int i=2;i <= s.size()-2;i++){
        if(s[i] == 'C'){
            idx = i;
            c++;
        }
    }

    if(c != 1){
        cout << "WA" << endl;
        return 0;
    }

    for(int i=1;i < s.size();i++){
        if(i != idx && !islower(s[i])){
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;
    return 0;
}

