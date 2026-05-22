#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> x(m);
    for(int i=0;i < m;i++){
        cin >> x[i];
    }

    if(n >= m){
        cout << 0 << endl;
        return 0;
    }

    sort(x.begin(),x.end());

    vector<long long> d;
    for(int i=1;i < m;i++){
        d.push_back(x[i] - x[i-1]);
    }

    sort(d.rbegin(),d.rend());
    long long ans = x.back() - x[0];
    for(int i=0;i < n-1;i++){
        ans -= d[i];
    }

    cout << ans << endl;
    return 0;
}

