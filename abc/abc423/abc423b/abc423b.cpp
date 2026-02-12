#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i < n;i++){
        cin >> l[i];
    }

    int left = 0;
    int right = 0;
    for(int i=0;i < n;i++){
        left++;
        if(l[i] == 1){
            break;
        }
    }

    for(int i=n-1;i >= 0;i--){
        right++;
        if(l[i] == 1){
            break;
        }
    }

    int ans = max(0,n - right - left + 1);

    cout << ans << endl;
}

