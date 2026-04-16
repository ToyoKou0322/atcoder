#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,d,p;
    cin >> n >> d >> p;
    vector<long long> f(n);
    long long sum = 0;
    for(int i=0;i < n;i++){
        cin >> f[i];
        sum += f[i];
    }

    sort(f.rbegin(),f.rend());

    long long ans = 0;
    long long tmp = 0;
    long long c = 0;
    for(int i=0;i < n;i++){
        c++;
        tmp += f[i];
        if(c == d){
            if(tmp > p){
                ans += p;
            }else{
                ans += tmp;
            }
            c = 0;
            tmp = 0;
        }
    }

    if(tmp > p){
        ans += p;
    }else{
        ans += tmp;
    }

    cout << ans << endl;
    return 0;
}

