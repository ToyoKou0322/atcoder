#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int c = 0;
    string t = s;
    int pre = 0;
    while(t.find("io") != string::npos){
        c += 2;
        size_t pos = t.find("io");
        t[pos] = 'x';
        t[pos+1] = 'x';
    }

    int ans = s.size() - c;
    cout << ans << endl;
    return 0;
}

