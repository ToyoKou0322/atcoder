#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = 0;
    for(int i=0;i < n;i++){
        if(s[i] == '1'){
            c++;
        }
    }

    if(c == 1){
        cout << 0 << endl;
        return 0;
    }

    int mid = (c + 1) / 2;

    c = 0;
    int mid_idx = -1;
    for(int i=0;i < n;i++){
        if(s[i] == '1'){
            c++;
        }
        if(c == mid){
            mid_idx = i;
            break;
        }
    }

    long long ans = 0;
    c = 0;
    int mid_idx_l = mid_idx;
    for(int i=mid_idx+1;i < n;i++){
        if(s[i] == '1'){
            ans += i - mid_idx - 1;
            mid_idx++;
        }
    }

    for(int i=mid_idx_l-1;i >= 0;i--){
        if(s[i] == '1'){
            ans += mid_idx_l - i - 1;
            mid_idx_l--;
        }
    }

    cout << ans << endl;
    return 0;
}

