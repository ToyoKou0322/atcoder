#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> a;
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            a.push_back(x);
        }else if(num == 2){
            int k;
            cin >> k;
            cout << a[a.size()-k] << endl;
        }
    }
    return 0;
}

