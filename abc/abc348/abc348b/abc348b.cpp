#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0;i < n;i++){
        int m = 0;
        for(int j=0;j < n;j++){
            int d = pow(abs(x[i]-x[j]),2) + pow(abs(y[i]-y[j]),2);
            m = max(m,d);
        }

        for(int j=0;j < n;j++){
            int d = pow(abs(x[i]-x[j]),2) + pow(abs(y[i]-y[j]),2);
            if(d == m){
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}

