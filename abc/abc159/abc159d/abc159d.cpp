#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> c(200010);
    for(int i=0;i < n;i++){
        cin >> a[i];
        c[a[i]]++;
    }

    map<long long,long long> combi;
    for(int i=0;i < n;i++){
        combi[a[i]] = (c[a[i]]*(c[a[i]]-1))/2;
    }

    long long sum = 0;
    for(auto x : combi){
        sum += x.second;
    }

    for(int i=0;i < n;i++){
        long long x = max(combi[a[i]] - c[a[i]]+1,0LL);
        long long y = sum - combi[a[i]];
        cout << x + y << endl;
    }

    return 0;
}   

