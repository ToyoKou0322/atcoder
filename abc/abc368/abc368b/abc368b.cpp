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
    while(true){
        int c = 0;
        for(int i=0;i < n;i++){
            if(a[i] > 0){
                c++;
            }
        }

        if(c <= 1){
            break;
        }else{
            ans++;
            sort(a.rbegin(),a.rend());
            a[0]--;
            a[1]--;
        }
    }

    cout << ans << endl;
    return 0;
}

