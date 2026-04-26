#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
    long long a,b;
    cin >> a >> b;

    long long g = gcd(a,b);

    long long count = 0;

    for(long long i = 2;i*i <= g;i++){
        if(g % i == 0){
            count++;
            while(g % i == 0){
                g /= i;
            }
        }
    }

    if(g > 1){
        count++;
    }

    cout << count + 1 << endl;
    return 0;
}
