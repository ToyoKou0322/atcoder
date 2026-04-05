#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int left = 0;
    long long ans = INT_MAX;
    for(int i=n-k-1;i < n;i++){
        ans = min(ans,a[i]-a[left]);
        left++;
    }

    cout << ans << endl;
    return 0;

}

