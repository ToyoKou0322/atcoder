#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<char> x = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    for(int i=0;i < n;i++){
        cin >> s[i];
        if(s[i][0] != 'H' && s[i][0] != 'D' && s[i][0] != 'C' && s[i][0] != 'S'){
            cout << "No" << endl;
            return 0;
        }
        bool ok = false;
        for(int j=0;j < x.size();j++){
            if(s[i][1] == x[j]){
                ok = true;
            }
        }
        if(!ok){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            if(s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

