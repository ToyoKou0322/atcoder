#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long x;
    cin >> x;

    set<long long> st;
    st.insert(1);

    for(long long i=2;i <= 100;i++){
        long long a = i;
        while(a <= 1000){
            a *= i;
            st.insert(a);
        }
    }

    auto it = st.upper_bound(x);

    cout << *prev(it) << endl;
    return 0;
}

