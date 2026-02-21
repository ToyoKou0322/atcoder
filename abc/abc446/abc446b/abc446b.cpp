#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> l(n);
    vector<int> a(m+1);
    for(int i=0;i < n;i++){
        cin >> l[i];
        vector<int> x(l[i]);
        for(int j=0;j < l[i];j++){
            cin >> x[j];
        }

        bool ok = false;
        for(int j=0;j < l[i];j++){
            if(a[x[j]] == 0){
                ok = true;
                cout << x[j] << endl;
                a[x[j]]++;
                break;
            }
            a[x[j]]++;
        }
        if(!ok){
            cout << 0 << endl;
        }
    }
    return 0;
}

