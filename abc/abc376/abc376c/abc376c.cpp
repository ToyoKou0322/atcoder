#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n),b(n-1);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n-1;i++){
        cin >> b[i];
    }

    sort(b.rbegin(),b.rend());
    sort(a.rbegin(),a.rend());
    vector<bool> x(n,false);
    int curr = 0;
    for(int i=0;i < n;i++){
        if(curr < n-1 && a[i] <= b[curr]){
            x[i] = true;
            curr++;
        }
    }

    int c = 0;
    for(int i=0;i < n;i++){
        if(!x[i]){
            c++;
        }
    }
    if(c != 1){
        cout << -1 << endl;
        return 0;
    }

    for(int i=0;i < n;i++){
        if(!x[i]){
            cout << a[i] << endl;
            return 0;
        }
    }
}

