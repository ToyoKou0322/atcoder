#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> c(63,1);
    for(int i=0;i < 62;i++){
        c[i+1] = c[i] * 2;
    }

    long long ans = 0;
    auto it = upper_bound(c.begin(),c.end(),n);
    if(it == c.begin()){
        cout << 0 << endl;
        return 0;
    }
    long long idx = distance(c.begin(),it) - 1;
    ans += idx;

    for(long long b=3;b <= sqrt(n/2);b+=2){
        long long res = (n/(b*b));
        auto it2 = upper_bound(c.begin(),c.end(),res);
        ans += distance(c.begin(),it2)-1;
    }

    cout << ans << "\n";
    return 0;
}

