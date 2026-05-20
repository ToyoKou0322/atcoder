#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }

    long long q = sum / n;
    long long r = sum % n;

    sort(a.begin(),a.end());

    vector<long long> b(n,q);
    for(int i=0;i < r;i++){
        b[n-i-1] = q + 1;
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        if(a[i] > b[i]){
            ans += a[i] - b[i];
        }
    }

    cout << ans << endl;
    return 0;
}
