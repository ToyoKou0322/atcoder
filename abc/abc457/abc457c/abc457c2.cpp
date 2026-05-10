#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<vector<long long>> a(n);
    for(int i=0;i < n;i++){
        long long l;
        cin >> l;
        for(int j=0;j < l;j++){
            long long x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    vector<long long> c(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }

    long long x = 0;
    for(int i=0;i < n;i++){
        long long s = a[i].size();
        x += s*c[i];
        if(x >= k){
            long long pre = x - s*c[i];
            long long idx = k - pre;
            cout << a[i][(idx-1 + s) % s] << endl;
            return 0;
        }
    }
}

