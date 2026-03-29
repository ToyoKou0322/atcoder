#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> ans(2*n+2);
    ans[1] = 0;
    for(int i=1;i < n+1;i++){
        cin >> a[i];
        ans[2*i] = ans[a[i]]+1;
        ans[2*i+1] = ans[a[i]]+1;
    }

    for(int i=1;i < ans.size();i++){
        cout << ans[i] << endl;
    }

}

