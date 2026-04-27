#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,q;
    cin >> n >> q;

    vector<long long> a(n+1);
    for(int i=1;i <= n;i++){
        a[i] = i;
    }

    vector<long long> where(n+1);
    for(int i=1;i <= n;i++){
        where[i] = i;
    }
    
    while(q--){
        long long x;
        cin >> x;

        long long p = where[x];
        if(p < n){
            swap(where[x],where[a[p+1]]);
            swap(a[p],a[p+1]);
        }else{
            swap(where[x],where[a[p-1]]);
            swap(a[p],a[p-1]);
        }
    }

    for(int i=1;i <= n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

