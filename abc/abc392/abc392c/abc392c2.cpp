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

    vector<int> ans(n);
    for(int i=0;i < n;i++){
        ans[q[i]-1] = q[p[i]-1];
    }
    for(int i=0;i < n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

