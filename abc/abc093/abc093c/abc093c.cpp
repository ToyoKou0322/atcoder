#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> x(3);
    for(int i=0;i < 3;i++){
        cin >> x[i];
    }

    sort(x.begin(),x.end());

    int ans = 0;
    if(x[0] % 2 == x[1] % 2){
        while(x[0] != x[1]){
            x[0] += 2;
            ans++;
        }
        ans += x.back() - x[1];
    }else if(x[0] % 2 != x[1] % 2){
        while(x[0] < x.back()){
            x[0] += 2;
            ans++;
        }
        while(x[1] < x.back()){
            x[1] += 2;
            ans++;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}
