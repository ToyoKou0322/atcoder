#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    string t = "";
    for(int i=0;i < s.size();i++){
        t += s[i];

        int n = t.size();
        if(n >= 3 && t[n-1] == 'C' && t[n-2] == 'B' && t[n-3] == 'A'){
            t.pop_back();
            t.pop_back();
            t.pop_back();
        }
    }

    cout << t << endl;
    return 0;
}

