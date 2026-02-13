#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i < n;i++){
        cin  >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    sort(b.begin(),b.end());
    for(int i=0;i < n;i++){
        bool ok = true;
        for(int j=0;j < m;j++){
            if(a[i] == b[j]){
                b[j] = -1;
                ok = false;
                break;
            }
        }
        if(ok){
            cout << a[i] << " ";
        }
    }
    return 0;
}

