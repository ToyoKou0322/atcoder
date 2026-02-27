#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    int ans = 0;
    int current = 0;
    for(int i=0;i < n;i++){
        if(current + a[i] <= k){
            current += a[i];
        }else{
            ans++;
            current = a[i];
        }
    }
    ans++;

    cout << ans << endl;
    return 0;
}

