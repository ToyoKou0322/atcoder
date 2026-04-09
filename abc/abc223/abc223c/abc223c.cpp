#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }

    double s = 0;
    for(int i=0;i < n;i++){
        s += a[i] / b[i];
    }

    double ans = 0;
    double curr = 0;
    for(int i=0;i < n;i++){
        if(curr + a[i] / b[i] < s/2){
            ans += a[i];
            curr += a[i] / b[i];
        }else{
            ans += b[i] * (s/2 - curr);
            break;
        }
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}

