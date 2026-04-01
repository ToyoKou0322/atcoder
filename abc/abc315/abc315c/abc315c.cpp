#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long,long long>> sf(n);
    for(int i=0;i < n;i++){
        cin >> sf[i].second >> sf[i].first;
    }

    sort(sf.rbegin(),sf.rend());

    long long ans = 0;
    long long s = sf[0].first;
    int flavor = sf[0].second;
    for(int i=1;i < n;i++){
        if(sf[i].second == flavor){
            ans = max(ans,s + sf[i].first/2);
        }else{
            ans = max(ans,s + sf[i].first);
        }
    }

    cout << ans << endl;
    return 0;
}

