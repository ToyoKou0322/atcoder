#include <iostream>
#include <vector>
#include <string> 

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long mod = 998244353;
    
    string s = to_string(n);

    long long ans = 0;
    long long p10 = 1;

    for(int i=1; i <= s.size(); i++){
        long long x;
        
        if(i == s.size()){
            x = n - p10 + 1;
        } else {
            x = p10 * 10 - p10;
        }

        long long x_mod = x % mod;
        
        long long tmp = (x_mod * (x_mod + 1)) % mod;
        tmp = (tmp * ((mod + 1) / 2)) % mod;
        
        ans = (ans + tmp) % mod;
        
        p10 *= 10;
    }
    
    cout << ans << endl;
    return 0;
}
