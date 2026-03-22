#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        int ans = 0;
        for(int i=0;i < n;i++){
            cin >> a[i];
            if(a[i] % 2 == 1){
                ans++;
            }
        }

        cout <<  ans << endl;
    }
}

