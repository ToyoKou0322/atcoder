#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,x;
    cin >> n >> x;
    vector<long long> v(n),p(n);
    for(int i=0;i < n;i++){
        cin >> v[i] >> p[i];
    }

    x *= 100;

    long long cur = 0;
    for(int i=0;i < n;i++){
        cur += v[i]*p[i];
        if(cur > x){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

