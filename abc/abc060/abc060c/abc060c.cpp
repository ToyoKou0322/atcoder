#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,t;
    cin >> n >> t;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long ans = 0;
    for(int i=1;i < n;i++){
        if(a[i] - a[i-1] < t){
            ans += a[i] - a[i-1];
        }else{
            ans += t;
        }
    }
    ans += t;
    cout << ans << endl;
    return 0;
}

