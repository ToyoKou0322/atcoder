#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<vector<long long>> a(n);
    for(int i=0;i < n;i++){
        int l;
        cin >> l;
        for(int j=0;j < l;j++){
            long long b;
            cin >> b;
            a[i].push_back(b);
        }
    }
    vector<long long> c(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }

    vector<long long> b;
    long long cnt = 0;
    for(int i=0;i < n;i++){
        cnt += a[i].size() * c[i];
        if(cnt >= k){
            long long pre = cnt - a[i].size() * c[i];
            long long kk = k - pre;
            long long s = a[i].size();
            cout << a[i][(kk-1) % s] << endl;
            return 0;
        }
    }
}

