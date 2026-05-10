#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    long long ok = 20000000000LL;
    long long ng = 0;

    while(abs(ok - ng) > 1){
        long long mid = ok + (ng - ok) / 2;

        long long req = 0;
        for(int i=0;i < n;i++){
            req += a[i] - mid;
        }

        if(req <= k){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
}

