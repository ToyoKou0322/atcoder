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

    sort(a.rbegin(),a.rend());

    vector<long long> x;
    vector<long long> y;
    for(int i=0;i < n;i++){
        x.push_back(a[i]);

        int m = x.size();
        if(m >= 2 && x[m-1] == x[m-2]){
            y.push_back(x.back());
            x.pop_back();
            x.pop_back();
        }
    }

    sort(y.rbegin(),y.rend());

    if(y.size() >= 2){
        cout << y[0] * y[1] << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}

