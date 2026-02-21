#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> l(m),r(m);
    for(int i=0;i < m;i++){
        cin  >> l[i] >> r[i];
    }

    vector<long long> x(n+2,0);
    for(int i=0;i < m;i++){
        x[l[i]]++;
        x[r[i]+1]--;
    }
    vector<long long> defenceP(n+2);
    for(int i=0;i < n;i++){
        defenceP[i+1] = defenceP[i] + x[i+1];
    }

    long long ans = LLONG_MAX;
    for(int i=1;i < n+1;i++){
        ans = min(defenceP[i],ans);
    }

    cout << ans << endl;
    return 0;
}

