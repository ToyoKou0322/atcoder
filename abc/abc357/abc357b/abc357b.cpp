#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;
    for(int i=0;i < s.size();i++){
        if(islower(s[i])){
            lower++;
        }else{
            upper++;
        }
    }

    if(lower > upper){
        for(int i=0;i < s.size();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
    }else{
        for(int i=0;i < s.size();i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s << endl;
    return 0;
}

