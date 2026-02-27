#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,char>> x(n+m);
    for(int i=0;i < n+m;i++){
        int y;
        cin >> y;
        if(i < n){
            x[i] = {y,'a'};
        }else{
            x[i] = {y,'b'};
        }
    }

    sort(x.begin(),x.end());

    for(int i=1;i < n+m;i++){
        if(x[i].second == 'a' && x[i-1].second == 'a'){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

