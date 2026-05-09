#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
long long n,k;
vector<long long> a;

bool check(long long x){
    long long req_K = 0;

    for(int i=0;i < n;i++){
        if(a[i] < x){
            long long diff = x - a[i];
            long long add_val = i + 1;

            long long cnt = (diff + add_val - 1) / add_val;
            req_K += cnt;

            if(req_K > k) return false;
        }
    }
    return req_K <= k;
}

int main(){
    cin >> n >> k;
    a.resize(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long ok = 0;
    long long ng = LLONG_MAX;

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

