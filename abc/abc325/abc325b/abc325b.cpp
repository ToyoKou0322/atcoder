#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> w(n),x(n);
    for(int i=0;i < n;i++){
        cin >> w[i] >> x[i];
    }

    long long ans = 0;
    for(int i=0;i < 24;i++){
        long long sum = 0;
        for(int j=0;j < n;j++){
            if((i + x[j]) % 24 >= 9 && (i + x[j]) % 24 <= 17){
                sum += w[j];
            }
        }
        ans = max(ans,sum);
    }

    cout << ans << endl;
    return 0;
}

