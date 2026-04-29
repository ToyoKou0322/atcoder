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
        if(n >= 2 && ((t[n-2] == '(' && t[n-1] == ')') || (t[n-2] == '[' && t[n-1] == ']') || (t[n-2] == '<' && t[n-1] == '>'))){
            t.pop_back();
            t.pop_back();
        }
    }

    if(t.size() == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

