#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n),q(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }
    for(int i=0;i < n;i++){
        cin >> q[i];
    }

    vector<int> a(n);
    for(int i=0;i < n;i++){
        a[i] = i+1;
    }

    int c1 = 0;
    int c2 = 0;
    int x = 0;
    int y = 0;
    do{
        c1++;
        c2++;
        bool ok1 = true;
        bool ok2 = true;
        for(int i=0;i < n;i++){
            if(a[i] != p[i]){
                ok1 = false;
            }
            if(a[i] != q[i]){
                ok2 = false;
            }
        }
        if(ok1){
            x = c1;
        }
        if(ok2){
            y = c2;
        }
    }while(next_permutation(a.begin(),a.end()));

    int ans = abs(x-y);
    cout << ans << endl;
    return 0;
}

