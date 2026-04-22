#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    unsigned long long n,x;
    cin >> n >> x;
    string s;
    cin >> s;

    string t = "";
    for(int i=0;i < s.size();i++){
        t += s[i];
        int k = t.size();
        if(k >= 2 && ((t[k-2] == 'R' && t[k-1] == 'U') || (t[k-2] == 'L' && t[k-1] == 'U'))){
            t.pop_back();
            t.pop_back();
        }
    }

    for(int i=0;i < t.size();i++){
        if(t[i] == 'U'){
            x /= 2;
        }else if(t[i] == 'L'){
            x *= 2;
        }else if(t[i] == 'R'){
            x *= 2;
            x++;
        }
    }

    cout << x << endl;
    return 0;
}

