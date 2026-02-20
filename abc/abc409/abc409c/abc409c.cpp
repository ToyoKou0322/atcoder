#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n,l;
    cin >> n >> l;
    vector<long long> d(n-1);
    for(int i=0;i < n-1;i++){
        cin >> d[i];
    }

    vector<long long> pos(n);
    pos[0] = 0;
    for(int i=1;i < n;i++){
        pos[i] = (pos[i-1] + d[i-1]) % l;
    }

    vector<long long> posC(l,0);
    for(int i=0;i < n;i++){
        posC[pos[i]]++;
    }

    if(l % 3 != 0){
        cout << 0 << endl;
        return 0;
    }
    long long x = l / 3;
    long long ans = 0;
    sort(pos.begin(),pos.end());
    for(int i=0;i < n;i++){
        if(pos[i] >= x){
            break;
        }

        if(posC[pos[i]] > 0 && posC[pos[i] + x] > 0 && posC[pos[i] + 2*x] > 0){
            ans += posC[pos[i]] * posC[pos[i] + x] * posC[pos[i] + 2*x];
            posC[pos[i]] = 0;
            posC[pos[i] + x] = 0;
            posC[pos[i] + 2*x] = 0;
        }
    }

    cout << ans << endl;
    return 0;
}

