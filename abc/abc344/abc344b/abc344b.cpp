#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    while(true){
        int x;
        cin >> x;
        a.push_back(x);
        if(x == 0){
            break;
        }
    }

    for(int i=a.size()-1;i >= 0;i--){
        cout << a[i] << endl;
    }
    return 0;
}

