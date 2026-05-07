#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> h(3),w(3);
    int hsum = 0;
    int wsum = 0;
    for(int i=0;i < 3;i++){
        cin >> h[i];
        hsum += h[i];
    }
    for(int i=0;i < 3;i++){
        cin >> w[i];
        wsum += w[i];
    }

    if(hsum != wsum){
        cout << 0 << endl;
        return 0;
    }

    long long ans = 0;

    for(int i=1;i <= 30;i++){
        for(int j=1;j <= 30;j++){
            for(int l=1;l <= 30;l++){
                for(int m=1;m <= 30;m++){
                    int k = h[0] - (i+j);
                    int n = h[1] - (l+m);
                    int o = w[0] - (i+l);
                    int p = w[1] - (j+m);
                    int q = w[2] - (k+n);
                    if(k > 0 && n > 0 && o > 0 && p > 0 && q > 0){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
