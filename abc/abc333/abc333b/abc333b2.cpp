#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    char a,b,c,d;
    cin >> a >> b >> c >> d;

    string s = "ABCDEABCDE";
    int len1 = 2;
    int len2 = 2;
    for(int i=0;i < s.size()-1;i++){
        if((s[i] == a && s[i+1] == b) || (s[i] == b && s[i+1] == a)){
            len1 = 1;
        }
    }

    for(int i=0;i < s.size()-1;i++){
        if((s[i] == c && s[i+1] == d) || (s[i] == d && s[i+1] == c)){
            len2 = 1;
        }
    }

    if(len1 == len2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

