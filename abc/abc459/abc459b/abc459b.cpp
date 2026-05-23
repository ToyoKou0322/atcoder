#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<int> ans;
    for(int i=0;i < n;i++){
        int x = -1;
        if(s[i][0] == 'a' || s[i][0] == 'b' || s[i][0] == 'c'){
            x = 2;
        }else if(s[i][0] == 'd' || s[i][0] == 'e' || s[i][0] == 'f'){
            x = 3;
        }else if(s[i][0] == 'g' || s[i][0] == 'h' || s[i][0] == 'i'){
            x = 4;
        }else if(s[i][0] == 'j' || s[i][0] == 'k' || s[i][0] == 'l'){
            x = 5;
        }else if(s[i][0] == 'm' || s[i][0] == 'n' || s[i][0] == 'o'){
            x = 6; 
        }else if(s[i][0] == 'p' || s[i][0] == 'q' || s[i][0] == 'r' || s[i][0] == 's'){
            x = 7;
        }else if(s[i][0] == 't' || s[i][0] == 'u' || s[i][0] == 'v'){
            x = 8;
        }else{
            x = 9;
        }
        cout << x;
    }
}

