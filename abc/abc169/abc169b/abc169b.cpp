#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
        if(a[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    long long p = 1;
    long long m = 1000000000000000000LL;
    for(int i=0;i < n;i++){
        if(p > m/a[i]){
            cout << -1 << endl;
            return 0;
        }else{
            p *= a[i];
        }
    }

    cout << p << endl;
    return 0;
}

