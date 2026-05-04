#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> r(n);
        for(int i=0;i < n;i++){
            cin >> r[i];
        }

        vector<int> l = r;

        for(int i=1;i < n;i++){
            l[i] = min(l[i-1] + 1,r[i]);
        }

        vector<int> a = l;

        for(int i=n-2;i >= 0;i--){
            a[i] = min(a[i+1] + 1, l[i]);
        }

        long long ans = 0;
        for(int i=0;i < n;i++){
            ans += abs(a[i] - r[i]);
        }

        cout << ans << endl;
    }

    return 0;
}

