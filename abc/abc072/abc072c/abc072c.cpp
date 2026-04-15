#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    int ans = 0;
    int right = 0;
    
    for(int left = 0; left < n; left++){
        while(right < n && a[right] - a[left] <= 2){
            right++;
        }
        ans = max(ans, right - left);
    }

    cout << ans << endl;
    return 0;
}
