#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    vector<pair<long long,long long>> rle;
    long long curr = a[0];

    int c = 0;
    for(int i=0;i < n;i++){
        if(a[i] == curr){
            c++;
        }else{
            rle.push_back({curr,c});
            c = 1;
            curr = a[i];
        }
    }
    rle.push_back({curr,c});

    vector<long long> b;
    for(int i=0;i < rle.size();i++){
        b.push_back(rle[i].first * rle[i].second);
    }

    long long ans = 0;

    sort(b.rbegin(),b.rend());

    for(int i=k;i < b.size();i++){
        ans += b[i];
    }


    cout << ans << endl;
    return 0;
}

