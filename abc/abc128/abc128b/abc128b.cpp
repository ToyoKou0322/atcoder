#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<tuple<string,int,int>> st;
    for(int i=0;i < n;i++){
        string s;
        int p;
        cin >> s >> p;
        st.insert({s,-p,i+1});
    }

    for(auto x : st){
        cout << get<2>(x) << endl;
    }
    return 0;
}

