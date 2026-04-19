#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<set<char>> st;
    set<char> u;
    for(int i=0;i < s.size();i++){
        if(s[i] == '('){
            st.push_back({});
        }else if(s[i] == ')'){
            for(auto x : st.back()){
                u.erase(x);
            }
            st.pop_back();
        }else{
            if(st.size() == 0){
                st.push_back({});
            }
            if(u.find(s[i]) != u.end()){
                cout << "No" << endl;
                return 0;
            }else{
                u.insert(s[i]);
                st.back().insert(s[i]);
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

