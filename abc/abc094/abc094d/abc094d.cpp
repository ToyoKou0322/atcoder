#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> b = a;

    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());

    vector<pair<long long,long long>> x;

    long long mx = 0;
    for(int i=0;i < n;i++){
        long long target = a[i] / 2;
        auto it = lower_bound(b.begin(),b.end(),target);
        int idx = distance(b.begin(),it);
        if(idx > 0){
            int idx2 = idx - 1;
            long long d = abs(a[i] / 2 - b[idx]);
            long long d2 = abs(a[i] / 2 - b[idx2]);

            if(d <= d2 && a[i] != b[idx]){
                x.push_back({a[i],b[idx]});
            }else{
                if(a[i] == b[idx2]){
                    continue;
                }
                x.push_back({a[i],b[idx2]});
            }
        }else{
            if(a[i] == b[idx]){
                continue;
            }
            x.push_back({a[i],b[idx]});
        }
    }

    sort(x.rbegin(),x.rend());

    cout << x[0].first << " " << x[0].second << endl;
    return 0;
}

