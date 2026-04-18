#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//途中

int main(){
    int t;
    cin >> t;

    while(t--){
        string a,b;
        cin >> a >> b;

        if(a == b){
            cout << "Yes" << endl;
            continue;
        }

        int l = 0;
        int r = 0;
        for(int i=0;i < a.size();i++){
            if(a[i] == '('){
                l++;
            }
            if(a[i] == ')' && r + 1 == l){
                r++;
            }
        }
    }
}

