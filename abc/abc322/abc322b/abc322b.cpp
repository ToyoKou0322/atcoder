#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    bool a = true; //接頭辞
    bool b = true; //接尾辞

    for(int i=0;i < n;i++){
        if(s[i] != t[i]){
            a = false;
            break;
        }
    }

    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());

    for(int i=0;i < n;i++){
        if(s[i] != t[i]){
            b = false;
            break;
        }
    }

    if(a && b){
        cout << 0 << endl;
    }else if(a && !b){
        cout << 1 << endl;
    }else if(!a && b){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }

    return 0;
}

