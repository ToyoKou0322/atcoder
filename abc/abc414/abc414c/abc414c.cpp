#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long make_palindrome(long long k,bool is_odd){
    long long res = k;
    long long temp = k;

    if(is_odd){
        temp /= 10;
    }

    while(temp > 0){
        res = res * 10 + temp % 10;
        temp /= 10;
    }
    return res;
}

bool radixConversion(long long p,long long a){
    string x = "";
    long long temp = p;
    while(temp > 0){
        x += to_string(temp%a);
        temp /= a;
    }
    string y = x;
    reverse(x.begin(),x.end());
    if(x == y){
        return true;
    }else{
        return false;
    }
}

int main(){
    long long a,n;
    cin >> a >> n;

    long long ans = 0;

    for(long long k=1;k <= 10000000;k++){
        long long p1 = make_palindrome(k, true);
        if(p1 <= n){
            if(radixConversion(p1,a)){
                ans += p1;
            }
        }

        long long p2 = make_palindrome(k, false);
        if(p2 <= n){
            if(radixConversion(p2,a)){
                ans += p2;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

