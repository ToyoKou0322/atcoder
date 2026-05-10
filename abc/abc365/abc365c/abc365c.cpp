#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(n);
    long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum <= m){
        cout << "infinite" << endl;
        return 0;
    }

    long long ok = 0;
    long long ng = 1000000000000000LL;

    while(abs(ng-ok) > 1){
        long long mid = ok + (ng - ok) / 2;

        long long x = 0;
        for(int i=0;i < n;i++){
            x += min(a[i],mid);
        }
        if(x <= m){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

