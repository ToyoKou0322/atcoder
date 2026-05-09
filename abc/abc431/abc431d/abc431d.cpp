#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> w(n),h(n),b(n);
    long long wsum = 0;
    long long bsum = 0;
    for(int i=0;i < n;i++){
        cin >> w[i] >> h[i] >> b[i];
        wsum += w[i];
        bsum += b[i];
    }

}


