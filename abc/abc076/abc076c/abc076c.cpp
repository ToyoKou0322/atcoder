#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string x,t;
    cin >> x >> t;

    int n = x.size();
    int m = t.size();

    reverse(x.begin(),x.end());
    reverse(t.begin(),t.end());

    bool OK = false;
    for(int i=0;i < n-m+1;i++){
        bool ok = true;
        for(int j=0;j < m;j++){
            if(!(x[j+i] == t[j] || x[j+i] == '?')){
                ok = false;
                break;
            }
        }
        if(ok){
            for(int j=0;j < m;j++){
                if(x[j+i] == '?'){
                    x[j+i] = t[j];
                }
            }
            OK = true;
            break;
        }
    }

    if(!OK){
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    reverse(x.begin(),x.end());

    for(int i=0;i < n;i++){
        if(x[i] == '?'){
            x[i] = 'a';
        }
    }

    cout << x << endl;
    return 0;
}

