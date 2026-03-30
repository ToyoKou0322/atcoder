#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> s(n),t(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }
    long long f = LLONG_MAX;
    for(int i=0;i < n;i++){
        cin >> t[i];
        f = min(f,t[i]);
    }

    vector<long long> ans(n);
    int idx = -1;
    for(int i=0;i < n;i++){
        if(t[i] == f){
            idx = i;
        }
    }
    ans[idx] = t[idx];
    for(int i=idx+1;i < idx+n;i++){
        ans[i%n] = min(ans[(i-1)%n]+s[(i-1)%n],t[i%n]);
    }

    for(int i=0;i < n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}

