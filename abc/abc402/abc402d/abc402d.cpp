#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(m),b(m);
    for(int i=0;i < m;i++){
        cin >> a[i] >> b[i];
    }

    long long ans = m*(m-1)/2;

    map<long long,long long> mp;
    for(int i=0;i < m;i++){
        long long x = (a[i] + b[i]) % n;
        mp[x]++;
    }

    for(auto x : mp){
        ans -= x.second*(x.second-1)/2;
    }

    cout << ans << endl;
    return 0;
}

