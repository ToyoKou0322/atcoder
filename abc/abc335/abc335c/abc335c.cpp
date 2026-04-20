#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<pair<int,int>> pos(n+1);
    for(int i=1;i <= n;i++){
        pos[i].first = n-i+1;
        pos[i].second = 0;
    }
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            char c;
            cin >> c;
            int x = pos.back().first;
            int y = pos.back().second;
            if(c == 'R'){
                pos.push_back({x+1,y});
            }else if(c == 'L'){
                pos.push_back({x-1,y});
            }else if(c == 'U'){
                pos.push_back({x,y+1});
            }else if(c == 'D'){
                pos.push_back({x,y-1});
            }
        }else{
            int p;
            cin >> p;
            cout << pos[pos.size() - p].first << " " << pos[pos.size() - p].second << endl;
        }
    }
    return 0;
}

