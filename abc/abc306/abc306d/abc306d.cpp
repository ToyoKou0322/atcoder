#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x(n),y(n);
    for(int i=0;i < n;i++){
        cin >> x[i] >> y[i];
    }

    long long h_prev = 0;
    long long p_prev = INT_MIN;

    for(int i=0;i < n;i++){
        long long h_new,p_new;
        if(x[i] == 0){
            h_new = max(h_prev,max(h_prev + y[i],p_prev + y[i]));
            p_new = p_prev;
        }else{
            h_new = h_prev;
            p_new = max(p_prev,h_prev + y[i]);
        }
        h_prev = h_new;
        p_prev = p_new;
    }

    long long ans = max(h_prev,p_prev);
    cout << ans << endl;
    return 0;

}
