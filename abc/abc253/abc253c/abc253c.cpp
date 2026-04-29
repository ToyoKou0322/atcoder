#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    int q;
    cin >> q;
    
    set<long long> s;
    map<long long,long long> cnt;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            long long x;
            cin >> x;
            s.insert(x);
            cnt[x]++;
        }else if(type == 2){
            long long x,c;
            cin >> x >> c;
            cnt[x] -= min(c,cnt[x]);
            if(cnt[x] == 0){
                s.erase(x);
            }
        }else{
            cout << *prev(s.end()) - *s.begin() << endl;
        }
    }

    return 0;
}

