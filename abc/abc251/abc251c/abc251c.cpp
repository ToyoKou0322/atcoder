#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    for(int i=0;i < n;i++){
        cin >> s[i] >> t[i];
    }

    map<int,bool> original;
    map<string,int> c;
    int mt = 0;
    for(int i=0;i < n;i++){
        if(c.count(s[i]) == 0){
            original[i] = true;
            mt = max(mt,t[i]);
        }
        c[s[i]]++;
    }

    for(int i=0;i < n;i++){
        if(t[i] == mt && original[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
}

