#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = LLONG_MAX;
    for(long long i=1;i*i <= n;i++){
        if(n % i == 0){
            ans = min(ans,n/i+i-2);
        }
    }

    cout << ans << endl;
    return 0;
}

