#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i=0;i < s.size();i++){
        string a = "";
        for(int j=i;j < s.size();j++){
            a += s[j];
            string t = a;
            reverse(t.begin(),t.end());
            if(a == t){
                int len = a.size();
                ans = max(ans,len);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

