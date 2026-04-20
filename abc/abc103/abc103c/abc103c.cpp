#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    long long ans = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        ans += a[i] - 1;
    }

    cout << ans << endl;
    return 0;
}

