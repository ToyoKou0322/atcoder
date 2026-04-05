#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> capacity(6);
    long long small = LLONG_MAX;
    for(int i=1;i <= 5;i++){
        cin >> capacity[i];
        small = min(small,capacity[i]);
    }

    if(n <= small){
        cout << 5 << endl;
        return 0;
    }

    long long groups = (n + small - 1) / small;
    long long ans = 5 + (groups - 1);
    cout << ans << endl;
    return 0;

}

