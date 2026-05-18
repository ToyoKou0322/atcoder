#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long,int>> x(n);
    for(int i=0;i < n;i++){
        cin >> x[i].first;
        x[i].second = i;
    }

    vector<pair<long long,int>> y = x;

    sort(y.begin(),y.end());

    for(int i=0;i < n;i++){
        int m = n / 2;
        auto it = upper_bound(y.begin(),y.end(),x[i]) - 1;
        int idx = distance(y.begin(),it);
        if(idx < m){
            cout << y[m].first << endl;
        }else{
            cout << y[m-1].first << endl;
        }
    }
    return 0;
}

