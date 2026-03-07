#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,l,r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    for(int i=0;i < n;i++){
        if(a[i] < l){
            cout << l << " ";
        }else if(a[i] >= l && a[i] <= r){
            cout << a[i] << " ";
        }else if(a[i] > r){
            cout << r << " ";
        }
    }

    return 0;
}

