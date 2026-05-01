#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
        sum += a[i];
    }
    int q;
    cin >> q;

    while(q--){
        int b,c;
        cin >> b >> c;

        int d = c - b;
        sum += d*mp[b];
        cout << sum << endl;
        mp[c] += mp[b];
        mp[b] = 0;
    }
    return 0;
}

