#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<int> pref(n+1),suff(n+1);
    vector<bool> seen_pref(n+1,false),seen_suff(n+1,false);
    for(int i=0;i < n;i++){
        if(!seen_pref[a[i]]){
            pref[i+1] = pref[i] + 1;
            seen_pref[a[i]] = true;
        }else{
            pref[i+1] = pref[i];
        }
    }
    reverse(a.begin(),a.end());
    for(int i=0;i < n;i++){
        if(!seen_suff[a[i]]){
            suff[i+1] = suff[i] + 1;
            seen_suff[a[i]] = true;
        }else{
            suff[i+1] = suff[i];
        }
    }

    int ans = 0;
    for(int i=0;i < n-1;i++){
        int x = pref[i] + suff[n-i];
        ans = max(ans,x);
    }

    cout << ans << endl;
    return 0;
}

