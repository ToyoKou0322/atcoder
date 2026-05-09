#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        int l;
        cin >> l;
        for(int j=0;j < l;j++){
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }

    int x,y;
    cin >> x >> y;

    cout << a[x-1][y-1] << endl;
}

