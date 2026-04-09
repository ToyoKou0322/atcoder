#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> t(n),l(n),r(n);
    for(int i=0;i < n;i++){
        cin >> t[i] >> l[i] >> r[i];
        if(t[i] == 1){
            l[i] = 2 * l[i];
            r[i] = 2 * r[i];
        }else if(t[i] == 2){
            l[i] = 2 * l[i];
            r[i] = 2 * r[i] - 1;
        }else if(t[i] == 3){
            l[i] = 2 * l[i] + 1;
            r[i] = 2 * r[i];
        }else if(t[i] == 4){
            l[i] = 2 * l[i] + 1;
            r[i] = 2 * r[i] - 1;
        }
    }

    int ans = 0;
    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            if(max(l[i],l[j]) <= min(r[i],r[j])){
                ans++;
            }
        }
    }

    cout << ans << endl;
}

