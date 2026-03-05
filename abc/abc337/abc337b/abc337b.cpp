#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    string t = "";
    t += s[0];
    char pre = s[0];
    for(int i=0;i < s.size();i++){
        if(s[i] != pre){
            t += s[i];
            pre = s[i];
        }
    }

    if(t == "A" || t == "AB" || t == "ABC" || t == "" || t == "AC" || t == "B" || t == "BC" || t == "C"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

