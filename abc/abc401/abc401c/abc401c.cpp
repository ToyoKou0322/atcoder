#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    if(k > n){
        cout << 1 << endl;
        return 0;
    }

    long long d = 1000000000;

    vector<long long> a(n+1,0);
    for(int i=0;i < k;i++){
        a[i] = 1;
    }

    vector<long long> prefixSum(k+1,0);
    for(int i=0;i < k;i++){
        prefixSum[i+1] = (prefixSum[i] + a[i]) % d;
    }

    for(int i=k;i <= n;i++){
        a[i] = (prefixSum[i] - prefixSum[i-k] + d) % d;
        prefixSum.push_back((a[i]+prefixSum[i]) % d);
    }

    cout << a[n] << endl;
    return 0;
}

