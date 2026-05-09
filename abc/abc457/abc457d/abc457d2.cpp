#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long long n,k;
vector<long long> a;

bool check(long long x){
    long long req = 0;
    for(int i=0;i < n;i++){
        if(a[i] < x){
            long long d = x - a[i];
            long long cnt = (d + i) / (i+1);
            req += cnt;

            if(req > k){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> n >> k;
    a.resize(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long ok = 0;
    long long ng = 2000000000000000001LL;

    while(ng - ok > 1){
        long long mid = ok + (ng - ok) / 2;

        if(check(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    
    return 0;
}

