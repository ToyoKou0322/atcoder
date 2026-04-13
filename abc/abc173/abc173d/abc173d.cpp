#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

    deque<pair<long long,long long>> q;
    q.push_front({a[0],1});

    long long ans = 0;
    long long x = 2;
    for(int i=1;i < n;i++){
        ans += q.front().first;
        if(q.front().first == a[i]){
            q.front().second++;
        }else{
            q.front().second--;
            q.push_back({a[i],x});
        }
        if(q.front().second == 0){
            q.pop_front();
        }
    }

    cout << ans << endl;
    return 0;
}

