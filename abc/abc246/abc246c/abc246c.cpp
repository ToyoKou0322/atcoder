#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k,x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    long long ans = 0;
    for(int i=0;i < n;i++){
        if(a[i] >= x){
            long long m = min(a[i] / x,k);
            a[i] -= m*x;
            k -= m; 
        }
    }

    sort(a.rbegin(),a.rend());

    for(int i=0;i < n;i++){
        if(k > 0){
            k--;
        }else{
            ans += a[i];
        }
    }

    cout << ans << endl;
    return 0;
}

