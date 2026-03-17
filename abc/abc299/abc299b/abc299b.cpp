#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> c(n);
    vector<int> r(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
    }

    for(int i=0;i < n;i++){
        cin >> r[i];
    }

    int m = 0;
    for(int i=0;i < n;i++){
        if(c[i] == t){
            m = max(m,r[i]);
        }
    }

    if(m != 0){
        for(int i=0;i < n;i++){
            if(r[i] == m){
                cout << i+1 << endl;
                return 0;
            }
        }
    }

    t = c[0];
    for(int i=0;i < n;i++){
        if(c[i] == t){
            m = max(m,r[i]);
        }
    }

    for(int i=0;i < n;i++){
        if(r[i] == m){
            cout << i+1 << endl;
            return 0;
        }
    }
}

