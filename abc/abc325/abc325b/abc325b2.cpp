#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x_sum(24,0);
    for(int i=0;i < n;i++){
        long long w;
        int x;
        cin >> w >> x;
        x_sum[x] += w;
    }

    long long ans = 0;
    for(int i=0;i < 24;i++){
        long long sum = 0;
        for(int j=9;j <= 17;j++){
            int target = (j-i+24) % 24;
            sum += x_sum[target];
        }
        ans = max(ans,sum);
    }

    cout << ans << endl;
    return 0;
}

