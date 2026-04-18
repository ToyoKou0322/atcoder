#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ng = 0;          
    long long ok = 1000000002;

    while (ok - ng > 1) {
        long long mid = (ok + ng) / 2;
        
        int x = distance(a.begin(), upper_bound(a.begin(), a.end(), mid));
        int y = m - distance(b.begin(), lower_bound(b.begin(), b.end(), mid));

        if (x >= y) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}
