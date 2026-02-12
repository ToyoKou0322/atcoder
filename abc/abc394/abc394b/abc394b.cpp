#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    vector<string> x(100,"");

    for(int i=0;i < n;i++){
        x[s[i].size()] = s[i];
    }

    for(int i=0;i < x.size();i++){
        cout << x[i];
    }
    
    return 0;
    
}

