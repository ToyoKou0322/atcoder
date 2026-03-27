#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x(n),y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }

    long long ans = 0;
    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            for(int k=j+1;k < n;k++){
                long long a = y[i]-y[j];
                long long b = x[i]-x[j];
                long long c = y[j]-y[k];
                long long d = x[j]-x[k];
                if(b * c != a * d){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

