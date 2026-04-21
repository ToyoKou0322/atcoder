#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<multiset<int>> box(n+1);
    vector<set<int>> num(200010);

    while(q--){
        int type;
        cin >> type;
        int i;
        cin >> i;
        if(type == 1){
            int j;
            cin >> j;
            box[j].insert(i);
            num[i].insert(j);
        }else if(type == 2){
            for(auto x : box[i]){
                cout << x << " ";
            }
            cout << endl;
        }else{
            for(auto x : num[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

