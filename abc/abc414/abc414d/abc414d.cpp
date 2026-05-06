#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> x(n);
    for(int i=0;i < n;i++){
        cin >> x[i];
    }

    sort(x.begin(),x.end());

    long long c = x.back() - x[0];

    vector<long long> d;

    for(int i=1;i < n;i++){
        d.push_back(x[i]-x[i-1]);
    }

    sort(d.rbegin(),d.rend());

    vector<long long> presum(d.size() + 1);

    for(int i=0;i < d.size();i++){
        presum[i+1] = presum[i] + d[i];
    }

    c -= presum[m-1];

    cout << c << endl;
}

