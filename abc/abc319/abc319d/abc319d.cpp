#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long long> l(n);
    for(int i=0;i < n;i++){
        cin >> l[i];
    }

    long long ok = 1000000000000000000LL;
    long long ng = 0;

    while(abs(ng - ok) > 1){
        long long mid = ng + (ok - ng) / 2;

        bool check = true;
        long long cl = 0;
        long long cnt = 1;
        for(int i=0;i < n;i++){
            if(l[i] > mid){
                check = false;
                break;
            }
            if(cl == 0 && cl + l[i] <= mid){
                cl += l[i];
            }else if(cl != 0 && cl + l[i] + 1 <= mid){
                cl += l[i] + 1;
            }else{
                cl = l[i];
                cnt++;
            }
        }

        if(cnt > m){
            check = false;
        }

        if(check){
            ok = mid;
        }else{
            ng = mid;
        }
    }
    cout << ok << endl;
    return 0;
}

