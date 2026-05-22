#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int q;
    cin >> q;

    priority_queue<long long,vector<long long>,greater<long long>> pq;

    long long x = 0;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            pq.push(x);
        }else if(type == 2){
            long long t;
            cin >> t;
            x += t;
        }else{
            long long h;
            cin >> h;
            long long c = 0;
            while(!pq.empty() && x - pq.top() >= h){
                c++;
                pq.pop();
            }

            cout << c << "\n";
        }
    }

    return 0;
}

