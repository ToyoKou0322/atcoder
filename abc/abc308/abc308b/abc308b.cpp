#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> c(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }
    vector<string> d(m);
    vector<int> p(m+1);

    for(int i=0;i < m;i++){
        cin >> d[i];
    }
    for(int j=0;j < m+1;j++){
        cin >> p[j];
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        bool ok = false;
        for(int j=0;j < m;j++){
            if(c[i] == d[j]){
                ans += p[j+1];
                ok = true;
                break;
            }
        }
        if(!ok){
            ans += p[0];
        }
    }

    cout << ans << endl;
    return 0;
}

