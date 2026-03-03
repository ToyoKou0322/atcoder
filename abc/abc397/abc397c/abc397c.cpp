#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    set<long long> left,right;
    for(int i=0;i < n;i++){
        right.insert(a[i]);
    }

    vector<long long> c(n+1);
    for(int i=0;i < n;i++){
        c[a[i]]++;
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        if(c[a[i]] == 1){
            right.erase(a[i]);
            left.insert(a[i]);
        }else{
            left.insert(a[i]);
        }
        long long x = right.size() + left.size();
        c[a[i]]--;
        ans = max(ans,x);
    }

    cout << ans << endl;
    return 0;
}

