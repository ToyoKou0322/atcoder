#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<int> c1(100010),c2(100010);
    for(int i=0;i < n;i++){
        if(i % 2 == 0){
            c1[a[i]]++;
        }else{
            c2[a[i]]++;
        }
    }

    vector<pair<int,int>> p1,p2;
    for(int i=0;i < 100010;i++){
        p1.push_back({c1[i],i});
        p2.push_back({c2[i],i});
    }

    sort(p1.rbegin(),p1.rend());
    sort(p2.rbegin(),p2.rend());

    int ans = 0;
    if(p1[0].second != p2[0].second){
        ans = n - p1[0].first - p2[0].first;
    }else{
        int cand1 = p1[0].first + p2[1].first;
        int cand2 = p2[0].first + p1[1].first;
        ans = n - max(cand1,cand2);
    }

    cout << ans << endl;
    return 0;
}
