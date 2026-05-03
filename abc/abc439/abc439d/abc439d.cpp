#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    map<long long,long long> mp;
    long long ans = 0;
    for(int i=0;i < n;i++){
        mp[a[i]]++;
        if(a[i] % 5 == 0){
            int unit = a[i] / 5;
            ans += mp[unit*3] * mp[unit*7];
        }
    }

    map<long long,long long> mp2;
    for(int i=n-1;i >= 0;i--){
        mp2[a[i]]++;
        if(a[i] % 5 == 0){
            int unit = a[i] / 5;
            ans += mp2[unit*3] * mp2[unit*7];
        }
    }

    cout << ans << endl;
    return 0;
}

