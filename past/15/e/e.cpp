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
    for(int bit=0;bit < (1 << n);bit++){
        int c = 0;
        int sum = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                c++;
                sum += a[i];
            }
        }
        if(c == k){
            ans += sum;
        }
    }

    cout << ans << endl;
    return 0;
}

