#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int wcount = 0;
    int widx = -1;
    for(int i=0;i < s.size();i++){
        if(s[i] == 'W'){
            if(wcount == 0){
                widx = i;
            }
            wcount++;
        }else if(s[i] == 'A' && wcount >= 1){
            s[widx] = 'A';
            s.replace(widx+1,wcount,wcount,'C');
            wcount = 0;
            widx = -1;
        }else{
            wcount = 0;
        }
    }

    cout << s << endl;
    return 0;
}

