#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> a(n),b(m);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < m;i++){
        cin >> b[i];
    }

    long long ok = 1000000001LL;
    long long ng = 0;

    while(abs(ng - ok) > 1){
        long long mid = ng + (ok - ng) / 2;

        long long cnt_a = 0;
        long long cnt_b = 0;
        for(int i=0;i < n;i++){
            if(a[i] <= mid){
                cnt_a++;
            }
        }
        for(int i=0;i < m;i++){
            if(b[i] >= mid){
                cnt_b++;
            }
        }

        if(cnt_a >= cnt_b){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;
    return 0;
}

