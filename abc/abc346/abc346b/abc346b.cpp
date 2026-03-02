#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int w,b;
    cin >> w >> b;

    string piano = "wbwbwwbwbwbw";

    for(int i=0;i < piano.size();i++){
        int wc = 0;
        int bc = 0;
        int curr = i;
        while(wc + bc < w + b){
            int idx = curr % piano.size();
            if(piano[idx] == 'w'){
                wc++;
            }else{
                bc++;
            }
            curr++;
        }

        if(wc == w && bc == b){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

