#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        int l;
        cin >> l;
        for(int j=0;j < l;j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    while(q--){
        int s,t;
        cin >> s >> t;
        cout << a[s-1][t-1] << endl;
    }
    return 0;
}

