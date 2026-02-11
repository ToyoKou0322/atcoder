#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string, int> m;

    for(int i=0;i < n-k+1;i++){
        string t = "";
        for(int j=i;j < i+k;j++){
            t += s[j];
        }
        m[t]++;
    }

    int a = 0;
    for(auto& p:m){
        a = max(p.second,a);
    }

    cout << a << endl;

    for(auto& p:m){
        if(p.second == a){
            cout << p.first << " ";
        }
    }
    return 0;
}

