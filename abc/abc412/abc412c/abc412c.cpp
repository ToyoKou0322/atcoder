#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    if(n == 2){
        if(s[1] <= s[0]*2){
            cout << 2 << endl;
        }else{
            cout << -1 << endl;
        }
        return;
    }

    long long current = s.front(); 
    long long last = s.back();   

    vector<long long> mid;
    for(int i=1; i < n-1; i++){
        mid.push_back(s[i]);
    }
    sort(mid.begin(), mid.end());

    long long ans = 1; 

    while(true) {
        if (current * 2 >= last) {
            ans++; 
            cout << ans << endl;
            return;
        }

        auto it = upper_bound(mid.begin(), mid.end(), current * 2);

        if (it == mid.begin()) {
            cout << -1 << endl;
            return;
        }

        long long next_domino = *(it - 1);

        if (next_domino <= current) {
            cout << -1 << endl;
            return;
        }

        current = next_domino;
        ans++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
