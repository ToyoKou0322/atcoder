#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main(){
    long long d;
    cin >> d;

    vector<long long> a;
    for(long long i=0;i*i <= d;i++){
        a.push_back(i*i);
    }

    long long ans = LLONG_MAX;
    int n = a.size();
    for(int i=0;i < a.size();i++){
        long long r = abs(d - a[i]);
        auto it = lower_bound(a.begin(),a.end(),r);
        
        int d1 = distance(a.begin(),it);

        if(it == a.begin()){
            ans = min(ans,r-a[d1]);
            continue;
        }

        int d2 = distance(a.begin(),prev(it));


        long long x = abs(r-a[d1]);
        long long y = abs(r-a[d2]);

        ans = min(ans,min(x,y));
    }

    cout << ans << endl;
    return 0;
}

