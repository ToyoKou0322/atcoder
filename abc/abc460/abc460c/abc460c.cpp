#include <iostream>
#include <sys/types.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> a(n),b(m);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int curr = 0;
    long long ans = 0;
    for(int i=0;i < n;i++){
        if(b[curr] <= a[i]*2){
            ans++;
            curr++;
            if(curr == m){
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

