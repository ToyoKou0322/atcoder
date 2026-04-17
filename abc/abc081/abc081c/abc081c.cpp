#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    vector<pair<int,int>> rle;
    int curr = a[0];
    int count = 0;
    for(int i=0;i < n;i++){
        if(a[i] == curr){
            count++;
        }else{
            rle.push_back({count,curr});
            count = 1;
            curr = a[i];
        }
    }
    rle.push_back({count,curr});


    if(rle.size() <= k){
        cout << 0 << endl;
        return 0;
    }

    sort(rle.rbegin(),rle.rend());

    int ans = 0;
    for(int i=0;i < rle.size();i++){
        if(i >= k){
            ans += rle[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}

