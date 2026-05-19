#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> st;
    for(int i=0;i < n;i++){
        cin >> s[i];
        string t = s[i];
        reverse(t.begin(),t.end());
        if(st.find(s[i]) == st.end() && st.find(t) == st.end()){
            st.insert(s[i]);
        }
    }

    cout << st.size() << endl;
    return 0;
}

