#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int c1 = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] != 'a'){
            break;
        }
        c1++;
    }

    reverse(s.begin(),s.end());

    int c2 = 0;
    for(int i=0;i < s.size();i++){
        if(s[i] != 'a'){
            break;
        }
        c2++;
    }

    reverse(s.begin(),s.end());

    if(c1 > c2){
        cout << "No" << endl;
        return 0;
    }

    s = string(c2-c1,'a') + s;
    string t = s;
    reverse(t.begin(),t.end());

    if(s == t){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

