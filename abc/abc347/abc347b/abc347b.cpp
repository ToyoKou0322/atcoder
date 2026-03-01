#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;

    set<string> st;
    for(int i=0;i < s.size();i++){
        string t = "";
        for(int j=i;j < s.size();j++){
            t += s[j];
            st.insert(t);
        } 
    }

    cout << st.size() << endl;
    return 0;
}

