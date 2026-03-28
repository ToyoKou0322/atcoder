#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    vector<int> bumon1(m+1);
    for(int i=0;i < n;i++){
        bumon1[a[i]]++;
    }
    vector<int> bumon2(m+1);
    for(int i=0;i < n;i++){
        bumon2[b[i]]++;
    }

    for(int i=1;i <= m;i++){
        cout << bumon2[i] - bumon1[i] << endl;
    }
    return 0;
}

