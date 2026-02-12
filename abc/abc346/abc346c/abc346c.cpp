#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long ans = k*(k+1)/2;

    set<long long> s;
    for(int i=0;i < n;i++){
        if(a[i] <= k){
            s.insert(a[i]);
        }
    }

    for(auto& x:s){
        ans -= x;
    }

    cout << ans << endl;
    return 0;
}

