#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t,p;
    cin >> n >> t >> p;
    vector<int> l(n);
    int count = 0;
    for(int i=0;i < n;i++){
        cin >> l[i];
        if(l[i] >= t){
            count++;
        }
    }

    if(count >= p){
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    int add = 1;
    while(true){
        count = 0;
        for(int i=0;i < n;i++){
            if(l[i] + add >= t){
                count++;
            }
        }
        if(count >= p){
            ans = add;
            break;
        }
        add++;
    }

    cout << ans << endl;
    return 0;
}

