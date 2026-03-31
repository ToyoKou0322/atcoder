#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int ans = 0;
    int left = 0;
    int right = 0;

    while(true){
        ans = max(ans,right - left + 1);
        if(right == n-1){
            break;
        }
        if(a[right+1] - a[left] < m){
            right++;
        }else{
            left++;
        }
    }

    cout << ans << endl;
    return 0;
}

