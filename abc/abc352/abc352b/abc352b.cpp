#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int current = 0;
    for(int i=0;i < t.size();i++){
        if(t[i] == s[current]){
            cout << i + 1 << " ";
            current++;
        }
    }
    return 0;
}

