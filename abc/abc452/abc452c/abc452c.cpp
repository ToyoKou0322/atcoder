#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i < n;i++){
        cin >> a[i] >> b[i];
    }
    int m;
    cin >> m;
    vector<string> s(m);
    for(int i=0;i < m;i++){
        cin >> s[i];
    }

    vector<set<pair<char,int>>> st(100);

    for(int i=0;i < m;i++){
        for(int j=0;j < s[i].size();j++){
            st[j+1].insert({s[i][j],s[i].size()});
        }
    }

    for(int i=0;i < m;i++){
        bool ok = true;
        if(s[i].size() != n){
            cout << "No" << endl;
            continue;
        }
        for(int j=0;j < n;j++){
            auto it = st[b[j]].find({s[i][j],a[j]});
            if(it == st[b[j]].end()){
                ok = false;
            }
        }
        if(ok){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}

