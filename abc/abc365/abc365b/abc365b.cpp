#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i < n;i++){
        int x;
        cin >> x;
        a[i] = {x,i+1};
    }

    sort(a.rbegin(),a.rend());

    cout << a[1].second << endl;
    return 0;
}

