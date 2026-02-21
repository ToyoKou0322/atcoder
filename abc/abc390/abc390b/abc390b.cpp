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

    for(int i=1;i < n;i++){
        if(a[i] * a[0] != a[i-1] * a[1]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

