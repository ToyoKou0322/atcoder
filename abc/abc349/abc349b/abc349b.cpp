#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> a(200);
    vector<bool> k(200);
    for(int i=0;i < s.size();i++){
        if(k[s[i]]){
            continue;
        }
        k[s[i]] = true;
        int c = 0;
        for(int j=i;j < s.size();j++){
            if(s[i] == s[j]){
                c++;
            }
        }
        a[c]++;
    }

    for(int i=0;i < a.size();i++){
        if(a[i] != 0 && a[i] != 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
