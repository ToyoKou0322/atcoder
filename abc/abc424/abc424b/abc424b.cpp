#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(k),b(k);
    for(int i=0;i < k;i++){
        cin >> a[i] >> b[i];
    }

    vector<int> x(n+1,0);
    for(int i=0;i < k;i++){
        x[a[i]]++;
        if(x[a[i]] == m){
            cout << a[i] << " ";
        }
    }
    return 0;
}

