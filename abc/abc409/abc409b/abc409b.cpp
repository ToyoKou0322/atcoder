#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i=0;i < n+1;i++){
        int c = 0;
        for(int j=0;j < n;j++){
            if(a[j] >= i){
                c++;
            }
        }
        if(c >= i){
            ans = max(ans,i);
        }
    }

    cout << ans << endl;
    return 0;
}

