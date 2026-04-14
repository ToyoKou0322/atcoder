#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i=0;i < n;i++){
        cin >> x[i];
    }
    vector<long long> p(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }
    int q;
    cin >> q;

    vector<long long> psum(n+1);
    for(int i=0;i < n;i++){
        psum[i+1] = psum[i] + p[i];
    }

    while(q--){
        long long l,r;
        cin >> l >> r;

        auto it = lower_bound(x.begin(),x.end(),l);
        auto it2 = upper_bound(x.begin(),x.end(),r);
        if(it == x.end() || it2 == x.begin()){
            cout << 0 << endl;
            continue;
        }

        int idx1 = distance(x.begin(),it);
        int idx2 = distance(x.begin(),it2) - 1;

        long long ans = psum[idx2+1] - psum[idx1];
        cout << ans << endl;
    }
}

