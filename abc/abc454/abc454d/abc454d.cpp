#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string simplify(const string& s){
    string res;
    for(char c : s){
        res.push_back(c);

        int n = res.size();
        if(n >= 4 && res[n-4] == '(' && res[n-3] == 'x' && res[n-2] == 'x' && res[n-1] == ')'){
            res.pop_back();
            res.pop_back();
            res.pop_back();
            res.pop_back();

            res.push_back('x');
            res.push_back('x');
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        string a,b;
        cin >> a >> b;

        if(simplify(a) == simplify(b)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}

