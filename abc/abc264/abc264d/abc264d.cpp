#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin >> s;

    string atcoder = "atcoder";

    int ans = 0;
    for(int i=0;i < s.size();i++){
        for(int j=0;j < s.size();j++){
            if(s[j] == atcoder[i]){
                ans += abs(i-j);
                s.erase(j,1);
                s = atcoder[i] + s;
            }
        }
    }

    cout << ans << endl;
}

