#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    int ans = 0;
    for(int bit=0;bit < (1 << n);bit++){
        vector<int> a(200,0);
        int x = 0;
        for(int i=0;i < n;i++){
            if(bit & (1 << i)){
                for(int j=0;j < s[i].size();j++){
                    a[s[i][j]]++;
                }
            }
        }
        for(int i=0;i < a.size();i++){
            if(a[i] == k){
                x++;
            }
        }
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}

