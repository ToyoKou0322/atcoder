#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> k(n);
    for(int i=0;i < n;i++){
        cin >> k[i];
    }

    int ans = INT_MAX;
    for(int bit=0;bit < (1 << n);bit++){
        int a = 0;
        int b = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                a += k[i];
            }else{
                b += k[i];
            }
        }
        ans = min(ans,max(a,b));
    }

    cout << ans << endl;
    return 0;
}

