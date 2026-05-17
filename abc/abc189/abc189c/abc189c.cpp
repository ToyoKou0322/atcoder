#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        long long m = a[i];
        for(int j=i;j < n;j++){
            m = min(m,a[j]);
            ans = max(ans,m*(j-i+1));
        }
    }

    cout << ans << endl;
    return 0;
}

