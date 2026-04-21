#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> f(n+1,0);

    for(int i=1;i <= n;i++){
        for(int j=i;j <= n;j += i){
            f[j]++;
        }
    }

    long long ans = 0;

    for(long long x=1;x <= n-1;x++){
        long long y = n - x;
        ans += f[x] * f[y];
    }

    cout << ans << endl;
    return 0;
}

