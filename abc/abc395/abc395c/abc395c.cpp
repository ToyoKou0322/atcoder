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

    vector<pair<int,int>> c(1000100);

    int ans = n+1;
    for(int i=0;i < n;i++){
        c[a[i]].first++;
        if(c[a[i]].first >= 2){
            ans = min(i - c[a[i]].second + 1, ans);
        }
        c[a[i]].second = i;
    }

    if(ans == n+1){
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;
    return 0;
}

