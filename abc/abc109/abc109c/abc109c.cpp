#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){
    long long n,X;
    cin >> n >> X;
    vector<long long> x(n);
    for(int i=0;i < n;i++){
        cin >> x[i];
    }

    x.push_back(X);

    sort(x.begin(),x.end());

    vector<long long> d;
    for(int i=1;i <= n;i++){
        d.push_back(x[i] - x[i-1]);
    }

    sort(d.begin(),d.end());

    long long m = d[0];

    long long ans = INT_MAX;
    for(int i=0;i < d.size();i++){
        ans = min(ans,gcd(m,d[i]));
    }

    cout << ans << endl;
    return 0;
}

