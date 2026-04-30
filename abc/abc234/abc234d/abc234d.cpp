#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0;i < n;i++){
        cin >> p[i];
    }

    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i < k;i++){
        pq.push(p[i]);
    }

    cout << pq.top() << endl;
    for(int i=k;i < n;i++){
        if(p[i] > pq.top()){
            pq.pop();
            pq.push(p[i]);
        }
        cout << pq.top() << endl;
    }

    return 0;
}
