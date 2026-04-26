#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> q(n),a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> q[i];
    }
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    long long ans = 0;
    for(int x=0;x <= 1e6;x++){
        bool can_make_x = true;
        for(int i=0;i < n;i++){
            if(q[i] < a[i] * x){
                can_make_x = false;
                break;
            }
        }

        if(!can_make_x) break;

        long long y = 1e18;
        for(int i=0;i < n;i++){
            if(b[i] > 0){
                long long rem = q[i] - a[i] * x;
                y = min(y,rem / b[i]);
            }
        }

        ans = max(ans,x+y);
    }

    cout << ans << endl;
    return 0;
}

