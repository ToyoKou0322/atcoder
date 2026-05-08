#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    int ans = 0;
    int current_height = 0;
    for(int i=0;i < n;i++){
        if(current_height < h[i]){
            ans += h[i] - current_height;
        }
        current_height = h[i];
    }

    cout << ans << endl;
    return 0;
}

