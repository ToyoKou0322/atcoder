#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());
    int m = a[0];
    for(int i=0;i < n;i++){
        if(a[i] != m){
            cout << a[i] << endl;
            return 0;
        }
    }
}

