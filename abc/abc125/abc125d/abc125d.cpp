#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    int mc = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        if(a[i] < 0){
            mc++;
        }
    }

    long long ans = 0;
    if(mc % 2 == 0){
        for(int i=0;i < n;i++){
            if(a[i] < 0){
                ans += -a[i];
            }else{
                ans += a[i];
            }
        }
    }else{
        for(int i=0;i < n;i++){
            a[i] = abs(a[i]);
        }

        sort(a.begin(),a.end());

        ans -= a[0];
        for(int i=1;i < n;i++){
            ans += a[i];
        }
    }

    cout << ans << endl;
    return 0;
}

