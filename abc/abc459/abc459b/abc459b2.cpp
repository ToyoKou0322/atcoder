#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string stoc = "22233344455566677778889999";
    for(int i=0;i < n;i++){
        string s;
        cin >> s;
        int x = s[0] - 'a';
        cout << stoc[x];
    }
    return 0;
}

