#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;

    set<pair<long long,long long>> st;

    while(q--){
        int type;
        cin >> type;
        long long a,b;
        cin >> a >> b;
        if(type == 1){
            st.insert({a,b});
        }else if(type == 2){
            st.erase({a,b});
        }else{
            auto it = st.find({a,b});
            auto it2 = st.find({b,a});
            if(it == st.end() || it2 == st.end()){
                cout << "No" << endl;
                continue;
            }
            cout << "Yes" << endl;
        }
    }
    return 0;
}

