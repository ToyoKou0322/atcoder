#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> c(m+1);
    for(int i=0;i < n;i++){
        cin >> a[i];
        c[a[i]]++;
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        bool ok = true;
        for(int j=1;j <= m;j++){
            if(c[j] == 0){
                ok = false;
                break;
            }
        }
        if(!ok){
            break;
        }
        c[a.back()]--;
        a.pop_back();
        ans++;
    }

    cout << ans << endl;
    return 0;
}

