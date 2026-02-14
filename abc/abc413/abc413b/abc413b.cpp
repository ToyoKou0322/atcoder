#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    set<string> a;
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(i == j){
                continue;
            }
            a.insert(s[i] + s[j]);
        }
    }

    cout << a.size() << endl;
}

