#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n+1,0);
    while(q--){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            a[x]++;
        }else if(num == 2){
            int x;
            cin >> x;
            a[x] += 2;
        }else{
            int x;
            cin >> x;
            if(a[x] >= 2){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}

