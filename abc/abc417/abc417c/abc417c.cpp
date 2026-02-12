#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    map<int,int> c;

    for(int i=0;i < n;i++){
        int val = a[i] + i+1;
        c[val]++;
    }

    long long ans = 0;

    for(int j=0;j < n;j++){
        int target = j+1 - a[j];

        if(c.count(target)){
            ans += c[target];
        }
    }

    cout << ans << endl;
    return 0;

    
}

