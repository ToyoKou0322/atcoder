#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    string t = s;

    bool a = true;
    for(int i=0;i < s.size();i++){
        if(a && t[i] == '.'){
            t[i] = 'o';
            a = false;
        }

        if(t[i] == '#'){
            a = true;
        }
    }

    cout << t << endl;
    return 0;

}

