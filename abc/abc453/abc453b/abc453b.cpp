#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int t,x;
    cin >> t >> x;
    vector<int> a(t+1);
    for(int i=0;i <= t;i++){
        cin >> a[i];
    }

    cout << 0 << " " << a[0] << endl;
    int p = a[0];
    for(int i=1;i <= t;i++){
        if(abs(a[i] - p) >= x){
            cout << i << " " << a[i] << endl;
            p = a[i];
        }
    }
}

