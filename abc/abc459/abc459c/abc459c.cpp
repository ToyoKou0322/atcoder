#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    map<int,int> row;
    int b = 0;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            a[x-1]++;
            row[a[x-1]]++;
            if(row[a[x-1]] == n){
                b++;
            }
        }else{
            int y;
            cin >> y;
            cout << row[y+b] << endl;
        }
    }
}

