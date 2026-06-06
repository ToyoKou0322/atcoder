#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    int q;
    cin >> q;

    set<int> st;
    map<int,int> cnt;

    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            st.insert(x);
            cnt[x]++;
        }else if(type == 2){
            int x;
            cin >> x;
            cnt[x]--;
            if(cnt[x] == 0){
                st.erase(x);
            }
        }else{
            cout << st.size() << endl;
        }
    }

    return 0;
}

