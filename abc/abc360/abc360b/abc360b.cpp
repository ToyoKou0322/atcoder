#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    for(int i=1;i < s.size();i++){
        for(int j=0;j < i;j++){
            string x = "";
            for(int k=j;k < s.size();k += i){
                x += s[k];
            }
            if(x == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

