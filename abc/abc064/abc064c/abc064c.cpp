#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> kinds;
    int c = 0;
    for(int i=0;i < n;i++){
        cin >> a[i];
        int x = a[i] / 400;
        if(x >= 8) x = 8;
        kinds.insert(x);
        if(x == 8){
            c++;
        }
    }

    if(c == 0){
        cout << kinds.size() << " " << kinds.size() << endl;
    }else{
        int s = kinds.size();
        if(kinds.size() == 1){
            cout << 1 << " " << c << endl;
        }else{
            cout << kinds.size() - 1 << " " << kinds.size() - 1 + c << endl;
        }
    }

    return 0;
}

