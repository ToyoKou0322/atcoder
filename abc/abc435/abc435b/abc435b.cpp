#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<int> prefixSum(n+1,0);
    for(int i=0;i < n;i++){
        prefixSum[i+1] = prefixSum[i] + a[i];
    }

    int ans = 0;

    for(int l=1;l <= n;l++){
        for(int r=l;r <= n;r++){
            bool x = true;
            for(int k=l;k <= r;k++){
                if((prefixSum[r] - prefixSum[l-1]) % a[k-1] == 0){
                    x = false;
                }
            }
            if(x){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

