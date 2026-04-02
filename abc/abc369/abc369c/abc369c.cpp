#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> b(n-1);
    for(int i=0;i < n-1;i++){
        b[i] = a[i+1] - a[i];
    }

    vector<pair<long long,long long>> r;
    long long curr = b[0];
    int count = 0;
    for(int i=0;i < n-1;i++){
        if(b[i] == curr){
            count++;
        }else{
            r.push_back({curr,count});
            curr = b[i];
            count = 1;
        }
    }
    r.push_back({curr,count});

    long long ans = n;
    for(int i=0;i < r.size();i++){
        ans += ((r[i].second + 1)*(r[i].second))/2;
    }

    cout << ans << endl;
    return 0;
}

