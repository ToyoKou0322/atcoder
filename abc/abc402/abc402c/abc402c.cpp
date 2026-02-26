#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> s(n);
    for(int i=0;i < m;i++){
        cin >> k[i];
        for(int j=0;j < k[i];j++){
            long long x;
            cin >> x;
            s[x-1].push_back(i);
        }
    }

    vector<long long> b(n);
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        for(auto c:s[b[i]-1]){
            k[c]--;
            if(k[c] == 0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

