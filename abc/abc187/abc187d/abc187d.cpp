#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n),b(n);
    vector<pair<long long,long long>> si(n);
    long long asum = 0;
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
        si[i] = {a[i]*2 + b[i],a[i]};
        asum += a[i];
    }

    sort(si.rbegin(),si.rend());

    long long cur = 0;
    for(int i=0;i < n;i++){
        cur += si[i].first - si[i].second; 
        asum -= si[i].second;
        if(cur > asum){
            cout << i + 1 << endl;
            return 0;
        }
    }
}

