#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> presum(n+1);
    for(int i=0;i < n;i++){
        presum[i+1] = presum[i] + a[i];
    }

    long long pre = 0;
    for(int i=0;i < m;i++){
        pre += presum[m] - presum[i];
    }

    long long ans = pre;
    for(int i=0;i < n-m;i++){
        long long d = m*a[i+m] - (presum[i+m] - presum[i]);
        ans = max(ans,pre + d);
        pre = pre + d;
    }

    cout << ans << endl;
    return 0;
}
