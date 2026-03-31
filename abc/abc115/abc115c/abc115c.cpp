#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    sort(h.begin(),h.end());
    long long ans = INT_MAX;

    int right = k-1;
    for(int left=0;left < n;left++){
        ans = min(ans,h[right] - h[left]);
        if(right == n-1){
            break;
        }
        right++;
    }

    cout << ans << endl;
    return 0;
}

