#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n),q(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }
    for(int i=0;i < n;i++){
        cin >> q[i];
    }

    vector<int> a(n+1);
    for(int i=0;i < n;i++){
        a[q[i]] = q[p[i]-1];
    }

    for(int i=1;i <= n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

