#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size() != 8){
        cout << "No" << endl;
        return 0;
    }

    if(isupper(s[0]) && isupper(s.back())){
        string t = "";
        for(int i=1;i < s.size()-1;i++){
            if(isupper(s[i])){
                cout << "No" << endl;
                return 0;
            }
            t += s[i];
        }
        int x = stoi(t);
        if(x >= 100000 && x <= 999999){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

