#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> a(n),b(m);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long ans = LLONG_MAX;
    for(int i=0;i < n;i++){
        auto it = lower_bound(b.begin(),b.end(),a[i]);

        if(it != b.end()){
            ans = min(ans,abs(*it - a[i]));
        }

        if(it != b.begin()){
            ans = min(ans,abs(*(it - 1) - a[i]));
        }
    }

    cout << ans << endl;
    return 0;
}

