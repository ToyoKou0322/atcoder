#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string t;
    cin >> t;

    vector<int> prefix_sum(n+1);
    for(int i=0;i < n;i++){
        prefix_sum[i+1] = prefix_sum[i] + (t[i] == '0' ? 1 : 0);
    }

    long long ans = 0;
    long long even = 0;
    long long odd = 0;
    for(int i=0;i < n;i++){
        if(prefix_sum[i+1] % 2 == 0){
            ans += 1 + even;
            even++;
        }else{
            ans += odd;
            odd++;
        }
    }

    cout << ans << endl;
    return 0;
}

