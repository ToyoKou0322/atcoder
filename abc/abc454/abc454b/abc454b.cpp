#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> f(n);
    for(int i=0;i < n;i++){
        cin >> f[i];
    }

    vector<int> a(1000);
    for(int i=0;i < n;i++){
        a[f[i]]++;
    }

    bool ok = true;
    bool ok2 = false;
    int c = 0;
    for(int i=0;i < 1000;i++){
        if(a[i] > 1){
            ok = false;
        }
        if(a[i] >= 1){
            c++;
        }
    }

    if(c == m){
        ok2 = true;
    }

    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    if(ok2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}

