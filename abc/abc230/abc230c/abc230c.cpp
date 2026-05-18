#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,a,b,p,q,r,s;
    cin >> n >> a >> b >> p >> q >> r >> s;

    vector<vector<char>> c(q-p+1,vector<char>(s-r+1,'.'));

    for(long long i=p;i <= q;i++){
        for(long long j=r;j <= s;j++){
            long long k1 = i-a;
            long long k2 = j-b;
            if(k1 == k2 && max(1-a,1-b) <= k1 && min(n-a,n-b) >= k1){
                c[i-p][j-r] = '#';
            }else if(k1 == -k2 && max(1-a,b-n) <= k1 && min(n-a,b-1) >= k1){
                c[i-p][j-r] = '#';
            }
            cout << c[i-p][j-r];
        }
        cout << endl;
    }
    return 0;
}

