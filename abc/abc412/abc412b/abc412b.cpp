#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    for(int i=0;i < s.size();i++){
        if(i > 0 && isupper(s[i])){
            bool ok = false;
            for(int j=0;j < t.size();j++){
                if(s[i-1] == t[j]){
                    ok = true;
                }
            }
            if(!ok){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

