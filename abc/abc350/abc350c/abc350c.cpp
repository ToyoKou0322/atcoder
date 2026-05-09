#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> where(n+1);
    for(int i=0;i < n;i++){
        cin >> a[i];
        where[a[i]] = i;
    }

    int curr = 1;
    vector<pair<int,int>> ans;
    for(int i=0;i < n;i++){
        if(a[i] != curr){
            ans.push_back({i+1,where[curr]+1});
            int x = where[curr];
            where[a[i]] = x;
            swap(a[i],a[where[curr]]); 
            where[curr] = i;   
        }
        curr++;
    }

    cout << ans.size() << endl;
    for(int i=0;i < ans.size();i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}

