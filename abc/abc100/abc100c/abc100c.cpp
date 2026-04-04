#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    int odd = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        if(a[i] % 2 == 1){
            odd++;
        }
    }

    if(odd == n){
        cout << 0 << endl;
        return 0;
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        if(a[i] % 2 == 0){
            while(a[i] > 1 && a[i] % 2 == 0){
                a[i] /= 2;
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

