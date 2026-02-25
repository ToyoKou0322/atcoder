#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(2*n);
    for(int i=0;i < 2*n;i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i=1;i <= n;i++){
        int x = -1;
        int y = -1;
        for(int j=0;j < 2*n;j++){
            if(a[j] == i){
                if(x == -1){
                    x = j;
                }else{
                    y = j;
                }
            }
        }
        if(y - x == 2){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

