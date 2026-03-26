#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int count = 0;
    vector<int> b(n,0);
    for(int i=0;i < n-2;i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            count++;
            b[i] = 1;
            b[i+1] = 2;
            b[i+2] = 3;
        }
    }
    while(q--){
        int x;
        char c;
        cin >> x >> c;
        if(b[x-1] > 0 && s[x-1] != c){
            count--;
            if(b[x-1] == 1){
                b[x-1] = 0;
                b[x] = 0;
                b[x+1] = 0;
            }else if(b[x-1] == 2){
                b[x-2] = 0;
                b[x-1] = 0;
                b[x] = 0;
            }else if(b[x-1] == 3){
                b[x-3] = 0;
                b[x-2] = 0;
                b[x-1] = 0;
            }
        }
        if(b[x-1] > 0 && s[x-1] == c){
            cout << count << endl;
            continue;
        }
        s[x-1] = c;
        if(x-1 < n-2){
            if(s[x-1] == 'A' && s[x] == 'B' && s[x+1] == 'C'){
                count++;
                b[x-1] = 1;
                b[x] = 2;
                b[x+1] = 3;
            }
        }
        if(x-1 > 0 && x-1 < n-1){
            if(s[x-2] == 'A' && s[x-1] == 'B' && s[x] == 'C'){
                count++;
                b[x-2] = 1;
                b[x-1] = 2;
                b[x] = 3;
            }
        }
        if(x-1 > 1){
            if(s[x-3] == 'A' && s[x-2] == 'B' && s[x-1] == 'C'){
                count++;
                b[x-3] = 1;
                b[x-2] = 2;
                b[x-1] = 3;
            }
        }
        cout << count << endl;
    }
}

