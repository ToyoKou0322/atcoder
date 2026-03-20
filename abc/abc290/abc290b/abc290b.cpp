#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    string t = "";
    int c = 0;
    for(int i=0;i < n;i++){
        if(s[i] == 'o'){
            c++;
            if(c <= k){
                t += 'o';
            }else{
                t += 'x';
            }
        }else{
            t += 'x';
        }
    }

    cout << t << endl;
    return 0;
}

