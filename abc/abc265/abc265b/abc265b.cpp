#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m,t;
    cin >> n >> m >> t;
    vector<long long> a(n);
    for(int i=1;i < n;i++){
        cin >> a[i];
    }
    vector<long long> x(m),y(m);
    for(int i=0;i < m;i++){
        cin >> x[i] >> y[i];
    }

    vector<long long> b(n+1);
    for(int i=0;i < m;i++){
        b[x[i]] = y[i];
    }

    for(int i=1;i < n;i++){
        t += b[i];
        if(t <= a[i]){
            cout << "No" << endl;
            return 0;
        }
        t -= a[i];
    }

    cout << "Yes" << endl;
    return 0;
}

