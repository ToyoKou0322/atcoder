#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    map<long long,long long> mp;

    for(int i=0;i < n;i++){
        mp[a[i]]++;
        mp[a[i]+b[i]]--;
    }

    long long prev_val = 0;
    long long prev_pos = 0;

    for(auto& x : mp){
        x.second += prev_val;

        prev_val = x.second;
        prev_pos = x.first;
    }

    auto it = mp.begin();
    prev_val = it -> second;
    prev_pos = it -> first;

    vector<long long> ans(n+1);
    int c = 0;
    for(auto x : mp){
        if(x.second != prev_val){
            ans[prev_val] += x.first - prev_pos;
            prev_pos = x.first;
        }
        prev_val = x.second;
    }

    for(int i=1;i <= n;i++){
        cout << ans[i] << " ";
    }

    return 0;
}

