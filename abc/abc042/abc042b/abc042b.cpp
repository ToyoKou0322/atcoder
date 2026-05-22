#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    multiset<string> st;
    for(int i=0;i < n;i++){
        string s;
        cin >> s;
        st.insert(s);
    }

    string ans = "";
    for(auto x : st){
        ans += x;
    }

    cout << ans << endl;
    return 0;
}

