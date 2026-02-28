#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> t(q);
    for(int i=0;i < q;i++){
        cin >> t[i];
    }

    vector<bool> exists(n,true);
    for(int i=0;i < q;i++){
        exists[t[i]-1] = !exists[t[i]-1];
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        if(exists[i]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

