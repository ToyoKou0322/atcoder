#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    int ans = 1;
    for(int d=1;d <= n-1;d++){
        for(int i=0;i < d;i++){
            int curr = h[i];
            int x = 1;
            for(int j=i+d;j < n;j+=d){
                if(h[j] == curr){
                    x++;
                }else{
                    x = 1;
                    curr = h[j];
                }
                ans = max(ans,x);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

