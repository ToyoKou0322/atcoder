#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> x(n+1);
    for(int i=0;i < m;i++){
        cin >> a[i];
        x[a[i]]++;
    }

    int cnt = 0;
    for(int i=1;i <= n;i++){
        if(x[i] == 0){
            cnt++;
        }
    }

    cout << cnt << endl;
    for(int i=1;i <= n;i++){
        if(x[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

