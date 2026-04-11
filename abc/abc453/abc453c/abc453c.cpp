#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> l(n);
    for(int i=0;i < n;i++){
        cin >> l[i];
    }

    long long ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        double curr = 0.5;
        long long c = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                double p = curr;
                curr += l[i];
                if(p * curr < 0){
                    c++;
                }
            }else{
                double p = curr;
                curr -= l[i];
                if(p * curr < 0){
                    c++;
                }
            }
        }
        ans = max(c,ans);
    }

    cout << ans << endl;
    return 0;
}

