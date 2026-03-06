#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    string u = "ABCDE";

    int l = -1;
    int r = -1;
    for(int i=0;i < u.size();i++){
        if(u[i] == s[0]){
            l = i;
        }
        if(u[i] == s[1]){
            r = i;
        }
    }

    int slength = abs(r-l);
    if(slength >= 3){
        slength = 5 - slength;
    }

    int l2 = -1;
    int r2 = -1;
    for(int i=0;i < u.size();i++){
        if(u[i] == t[0]){
            l2 = i;
        }
        if(u[i] == t[1]){
            r2 = i;
        }
    }

    int tlength = abs(r2-l2);
    if(tlength >= 3){
        tlength = 5 - tlength;
    }

    if(slength == tlength){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

