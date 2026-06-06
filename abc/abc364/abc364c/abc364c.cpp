#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,x,y;
    cin >> n >> x >> y;
    vector<long long> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    long long asum = 0,bsum = 0;
    for(int i=0;i < n;i++){
        asum += a[i];
        bsum += b[i];
        if(asum > x || bsum > y){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}

