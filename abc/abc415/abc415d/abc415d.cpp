#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(m),b(m);
    vector<pair<long long,long long>> x(m);
    for(int i=0;i < m;i++){
        cin >> a[i] >> b[i];
        x[i] = {a[i] - b[i],a[i]};
    }

    sort(x.begin(),x.end());

    long long cur = 0;
    long long ans = 0;
    while(cur < m){
        if(x[cur].second > n){
            cur++;
            continue;
        }

        long long c = (n-x[cur].second) / x[cur].first + 1;
        n -= c*x[cur].first;
        ans += c;
    }

    cout << ans << endl;
    return 0;
}

