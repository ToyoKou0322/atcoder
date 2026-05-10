#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long a,b,x;
    cin >> a >> b >> x;

    long long ok = 0;
    long long ng = 1000000001LL;

    while(abs(ng - ok) > 1){
        long long mid = ok + (ng - ok) / 2;
        string d = to_string(mid);
        if(a * mid + b * d.size() <= x){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

