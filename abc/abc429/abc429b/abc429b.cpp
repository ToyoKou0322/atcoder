#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        sum += a[i];
    }

    for(int i=0;i < n;i++){
        if(sum - a[i] == m){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

