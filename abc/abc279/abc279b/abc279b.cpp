#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    if(s.size() < t.size()){
        cout << "No" << endl;
        return 0;
    }

    for(int i=0;i < s.size() - t.size() + 1;i++){
        string u = s.substr(i,t.size());
        if(u == t){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

