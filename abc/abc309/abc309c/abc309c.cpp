#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    vector<pair<long long,long long>> ab(n);
    unsigned long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> ab[i].first >> ab[i].second;
        sum += ab[i].second;
    }

    if(sum <= k){
        cout << 1 << endl;
        return 0;
    }

    sort(ab.begin(),ab.end());

    long long ans = 1;
    for(int i=0;i < n;i++){
        sum -= ab[i].second;
        if(sum <= k){
            ans = ab[i].first + 1;
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}

