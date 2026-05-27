#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    vector<pair<int,int>> sum(n);
    for(int i=0;i < n;i++){
        cin >> a[i].first;
        a[i].second = -(i + 1);
        sum[i].first = a[i].first;
        sum[i].second = -(i + 1);
    }
    for(int i=0;i < n;i++){
        cin >> b[i].first;
        b[i].second = -(i + 1);
        sum[i].first += b[i].first;
        sum[i].second = -(i + 1);
    }

    sort(a.rbegin(),a.rend());

    vector<bool> pass(n+1);

    for(int i=0;i < x;i++){
        pass[-a[i].second] = true;
    }

    vector<pair<int,int>> c;
    for(int i=1;i <= n;i++){
        if(!pass[i]){
            c.push_back({b[i-1].first,b[i-1].second});
        }
    }

    sort(c.rbegin(),c.rend());

    for(int i=0;i < y;i++){
        pass[-c[i].second] = true;
    }

    vector<pair<int,int>> last;
    for(int i=1;i <= n;i++){
        if(!pass[i]){
            last.push_back({sum[i-1].first,sum[i-1].second});
        }
    }

    sort(last.rbegin(),last.rend());

    for(int i=0;i < z;i++){
        pass[-last[i].second] = true;
    }

    for(int i=1;i <= n;i++){
        if(pass[i]){
            cout << i << endl;
        }
    }
    return 0;
}

