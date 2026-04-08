#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    vector<long long> b = a;
    long long m = LLONG_MAX;
    long long l = LLONG_MAX;
    vector<long long> x(n);
    vector<long long> y(n);
    for(int i=0;i < n;i++){
        long long mc = 0;
        long long lc = 0;
        while(b[i] % 2 == 0){
            b[i] /= 2;
            mc++;
        }
        while(b[i] % 3 == 0){
            b[i] /= 3;
            lc++;
        }
        x[i] = mc;
        y[i] = lc;
        m = min(mc,m);
        l = min(lc,l);
    }

    for(int i=1;i < n;i++){
        if(b[i] != b[0]){
            cout << -1 << endl;
            return 0;
        }
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        ans += x[i] - m;
        ans += y[i] - l;
    }

    cout << ans << endl;

}

