#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(m),b(m);
    set<pair<long long,long long>> s;
    for(int i=0;i < m;i++){
        cin >> a[i] >> b[i];
        s.insert({a[i],b[i]});
    }

    long long ans = n * n;
    for(int i=0;i < m;i++){
        for(int j=-2;j <= 2;j++){
            for(int k=-2;k <= 2;k++){
                if(j == k || j == 0 || k == 0 || -j == k) continue;
                long long x = a[i] + j;
                long long y = b[i] + k;
                if(x <= n && x >= 1 && y <= n && y >= 1){
                    s.insert({x,y});
                }
            }
        }
    }

    long long x = s.size();
    ans -= x;
    cout << ans << endl;
    return 0;
}

