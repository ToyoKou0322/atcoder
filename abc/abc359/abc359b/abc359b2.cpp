#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n*2);
    for(int i=0;i < n*2;i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i=0;i < n*2-2;i++){
        if(a[i] == a[i+2]){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

