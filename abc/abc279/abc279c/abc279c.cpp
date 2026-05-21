#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;

    vector<string> s(h),t(h);
    for(int i=0;i < h;i++){
        cin >> s[i];
    }
    for(int i=0;i < h;i++){
        cin >> t[i];
    }

    map<string,int> mp_s,mp_t;
    for(int i=0;i < w;i++){
        string x = "";
        string y = "";
        for(int j=0;j < h;j++){
            x += s[j][i];
            y += t[j][i];
        }
        mp_s[x]++;
        mp_t[y]++;
    }

    for(auto x : mp_s){
        if(mp_t.find(x.first) == mp_t.end()){
            cout << "No" << endl;
            return 0;
        }

        if(x.second != mp_t[x.first]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

