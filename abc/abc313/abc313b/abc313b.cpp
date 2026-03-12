#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m),b(m);
    for(int i=0;i < m;i++){
        cin >> a[i] >> b[i];
    }

    vector<int> saikyo(n+1);
    for(int i=1;i <= n;i++){
        saikyo[i] = 1;
    }

    for(int i=0;i < m;i++){
        saikyo[b[i]] = -1;
        for(int j=0;j < m;j++){
            if(a[j] == b[i]){
                saikyo[b[j]] = -1;
            }
        }
    }

    int count = 0;
    for(int i=1;i <= n;i++){
        if(saikyo[i] == 1){
            count++;
        }
    }

    if(count > 1){
        cout << -1 << endl;
        return 0;
    }

    for(int i=1;i <= n;i++){
        if(saikyo[i] == 1){
            cout << i << endl;
            return 0;
        }
    }

}

