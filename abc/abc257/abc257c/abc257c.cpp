#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> w(n);
    for(int i=0;i < n;i++){
        cin >> w[i];
    }

    vector<pair<long long,char>> x(n);
    for(int i=0;i < n;i++){
        x[i].first = w[i];
        x[i].second = s[i];
    }

    sort(x.begin(),x.end());

    for(int i=0;i < n;i++){
        cout << x[i].first << " ";
    }
    cout << endl;
    for(int i=0;i < n;i++){
        cout << x[i].second << " ";
    }

    vector<long long> prefixsumL(n+1);
    for(int i=0;i < n;i++){
        prefixsumL[i+1] = prefixsumL[i] + (x[i].second == '0' ? 1 : 0);
    }

    vector<long long> prefixsumR(n+1);
    for(int i=0;i < n;i++){
        prefixsumR[i+1] = prefixsumR[i] + (x[n-i-1].second == '1' ? 1 : 0);
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        long long target = x[i].first;
        auto it = upper_bound(x.begin(),x.end(),target) - 1;
        int idx = distance(x.begin(),it);
        ans = max(ans,prefixsumL[idx]+prefixsumR[idx+1]);
    }
    cout << ans << endl;
    return 0;
}

