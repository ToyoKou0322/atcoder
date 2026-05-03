#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<vector<long long>> g(k);

    for(int i=0;i < n;i++){
        g[i%k].push_back(a[i]);
    }

    for(int i=0;i < k;i++){
        sort(g[i].rbegin(),g[i].rend());
    }

    vector<long long> c(n);
    for(int i=0;i < n;i++){
        c[i] = g[i%k].back();
        g[i%k].pop_back();
    }

    vector<long long> b = a;
    sort(b.begin(),b.end());

    for(int i=0;i < n;i++){
        if(c[i] != b[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

