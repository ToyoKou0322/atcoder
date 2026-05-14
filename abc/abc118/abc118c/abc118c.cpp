#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    for(int i=0;i < n;i++){
        long long a;
        cin >> a;
        pq.push(a);
    }

    while(pq.size() != 1){
        long long x = pq.top();
        pq.pop();

        long long y = pq.top();
        pq.pop();

        if(y % x != 0){
            pq.push(y % x);
        }
        pq.push(x);
    }

    cout << pq.top() << endl;
    return 0;
}

