#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;

    for(int i=0;i < s.size();i++){
        if(i == a){
            if(s[i] != '-'){
                cout << "No" << endl;
                return 0;
            }
        }else{
            if(s[i] == '-'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

