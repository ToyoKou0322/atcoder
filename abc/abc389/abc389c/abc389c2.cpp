#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    vector<long long> a;
    a.push_back(0);
    int now = 0;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            long long l;
            cin >> l;
            a.push_back(a.back() + l);
        }else if(type == 2){
            now++;
        }else if(type == 3){
            int k;
            cin >> k;
            cout << a[now+k-1] - a[now] << "\n";
        }
    }
}

