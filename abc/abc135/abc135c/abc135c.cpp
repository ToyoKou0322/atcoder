#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n+1),b(n);
    for(int i=0;i < n+1;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    long long ans = 0;
    for(int i=n-1;i >= 0;i--){
        if(a[i+1] >= b[i]){
            ans += b[i];
            b[i] = 0;
        }else if(a[i+1] < b[i]){
            ans += a[i+1];
            b[i] -= a[i+1];
        }

        if(a[i] >= b[i]){
            ans += b[i];
            a[i] -= b[i];
            b[i] = 0;
        }else if(a[i] < b[i]){
            ans += a[i];
            a[i] = 0;
            b[i] -= a[i];
        }
    }

    cout << ans << endl;
    return 0;
}

