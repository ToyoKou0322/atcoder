#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n,m,q;
    cin >> n >> m >> q;

    vector<set<int>> a(n+1);

    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            long long x,y;
            cin >> x >> y;
            a[x].insert(y);
        }else if(num == 2){
            long long x;
            cin >> x;
            a[x].insert(0);
        }else if(num == 3){
            long long x,y;
            cin >> x >> y;
            if(a[x].find(0) != a[x].end() || a[x].find(y) != a[x].end()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}

