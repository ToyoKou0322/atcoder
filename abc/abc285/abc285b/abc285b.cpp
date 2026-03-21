#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=1;i < n;i++){
        int l = 0;
        for(int j=0;j < n-i;j++){
            if(s[j] != s[j+i]){
                l = j+1;
            }else{
                break;
            }
        }
        cout << l << endl;
    }
}

