#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    if(s.size() > t.size()){
        cout << "No" << endl;
        return 0;
    }

    for(int i=0;i < s.size();i++){
        if(t[i] != s[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

