#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<long long> r(n);
    for(int i=0;i < n;i++){
        cin >> r[i];
    }

    sort(r.begin(),r.end());

    vector<long long> prefixSum(n+1,0);
    for(int i=0;i < n;i++){
        prefixSum[i+1] = prefixSum[i] + r[i];
    }

    while(q--){
        long long x;
        cin >> x;
        auto it = upper_bound(prefixSum.begin(),prefixSum.end(),x);
        int d = distance(prefixSum.begin(),it);
        cout << d-1 << endl;
    }
    return 0;
}

