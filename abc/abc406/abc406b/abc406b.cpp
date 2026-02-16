#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    long long y = 1;
    for(int i=0;i < k;i++){
        y *= 10;
    }
    y--;

    long long ans = 1;
    for(int i=0;i < n;i++){
        if(ans > (y/a[i])){
            ans = 1;
        }else{
            ans *= a[i];
        }
    }

    cout << ans << endl;
    return 0;
}

