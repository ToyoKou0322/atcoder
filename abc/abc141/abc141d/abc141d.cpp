#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    priority_queue<long long> pq;
    for(int i=0;i < n;i++){
        long long a;
        cin >> a;
        pq.push(a);
    }


    for(int i=0;i < m;i++){
        long long x = pq.top();
        pq.pop();
        x /= 2;
        pq.push(x);
    }

    long long ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;
    return 0;
}

