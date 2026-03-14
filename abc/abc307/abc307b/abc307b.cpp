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

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(i == j){
                continue;
            }

            string a = s[i] + s[j];
            string b = a;
            reverse(b.begin(),b.end());
            if(a == b){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

