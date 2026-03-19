#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> x(5*n);
    for(int i=0;i < 5*n;i++){
        cin >> x[i];
    }

    sort(x.begin(),x.end());
    for(int i=0;i < n;i++){
        x.pop_front();
    }
    sort(x.rbegin(),x.rend());
    for(int i=0;i < n;i++){
        x.pop_front();
    }

    double sum = 0;
    for(int i=0;i < 3*n;i++){
        sum += x[i];
    }

    double ans = sum / (3*n);
    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}

