#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    long long ai = a.back();

    long long best_aj = -1;
    long long min_diff = 2e18;

    for(int i=0;i < n-1;i++){
        long long aj = a[i];

        long long diff = abs(ai - 2 * aj);

        if(diff < min_diff){
            min_diff = diff;
            best_aj = aj;
        }
    }

    cout << ai << " " << best_aj << endl;

    return 0;
}

