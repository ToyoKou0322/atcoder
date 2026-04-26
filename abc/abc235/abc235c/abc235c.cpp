#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n);
    map<pair<long long,long long>,int> mp;
    map<long long,long long> c; 
    for(int i=0;i < n;i++){
        cin >> a[i];
        c[a[i]]++;
        mp[{a[i],c[a[i]]}] = i+1;
    }

    while(q--){
        int x,k;
        cin >> x >> k;
        if(mp.find({x,k}) != mp.end()){
            cout << mp[{x,k}] << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}

