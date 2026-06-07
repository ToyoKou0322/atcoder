#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n,k,m;
    cin >> n >> k >> m;
    vector<pair<long long,long long>> vc(n);
    for(int i=0;i < n;i++){
        long long c,v;
        cin >> c >> v;
        vc[i] = {v,c};
    }

    sort(vc.rbegin(),vc.rend());

    set<long long> st;

    int kindcnt = 0;
    int cnt = 0;
    long long ans = 0;
    for(int i=0;i < n;i++){
        if(st.find(vc[i].second) == st.end()){
            st.insert(vc[i].second);
            kindcnt++;
            cnt++;
            ans += vc[i].first;
        }else{
            cnt++;
            ans += vc[i].first;
            if(m - kindcnt > k - cnt){
                cnt--;
                ans -= vc[i].first;
            }
        }

        if(cnt == k){
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

