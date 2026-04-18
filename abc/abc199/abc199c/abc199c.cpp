#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int start = 0;
    while(q--){
        int type,a,b;
        cin >> type >> a >> b;
        a--;
        b--;
        if(type == 1){
            if(start == 0){
                swap(s[a],s[b]);
            }else{
                a += n;
                b -= n;
                b += 2*n;
                a %= 2*n;
                b %= 2*n;
                swap(s[a],s[b]);
            }
        }else{
            start = (start == 0 ? n : 0);
        }
    }

    if(start == 0){
        cout << s << endl;
    }else{
        for(int i=n;i < 2*n;i++){
            cout << s[i];
        }
        for(int i=0;i < n;i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

