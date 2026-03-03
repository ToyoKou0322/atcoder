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
    }
    vector<long long> s(n-1),t(n-1);
    for(int i=0;i < n-1;i++){
        cin >> s[i] >> t[i];
    }

    for(int i=0;i < n-1;i++){
        long long x = a[i] / s[i];
        a[i] -= x * s[i];
        a[i+1] += x * t[i];
    }

    cout << a.back() << endl;
    return 0;
}

