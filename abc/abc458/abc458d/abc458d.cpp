#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>

using namespace std;

int main(){
    long long x;
    cin >> x;
    long long q;
    cin >> q;

    multiset<long long> st;
    st.insert(x);
    auto it = st.begin();
    while(q--){
        long long a,b;
        cin >> a >> b;

        st.insert(a);
        st.insert(b);

        if(a >= *it && b >= *it){
            advance(it,1);
        }else if(a < *it && b < *it){
            advance(it,-1);
        }

        cout << *it << endl;
    }
}

