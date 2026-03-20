#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    set<string> st;
    for(int i=0;i < k;i++){
        st.insert(s[i]);
    }

    for(auto x : st){
        cout << x << endl;
    }
    return 0;
}

