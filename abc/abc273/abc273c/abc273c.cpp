#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    set<long long> st;
    for(int i=0;i < n;i++){
        cin >> a[i];
        st.insert(a[i]);
    }

    int c = st.size() - 1;
    map<long long,long long> mp;
    for(auto x : st){
        mp[x] = c;
        c--;
    }

    map<long long,long long> ans;

    for(int i=0;i < n;i++){
        ans[mp[a[i]]]++;
    }

    for(int i=0;i < n;i++){
        cout << ans[i] << endl;
    }
}

