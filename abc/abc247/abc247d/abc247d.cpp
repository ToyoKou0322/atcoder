#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int q;
    cin >> q;

    deque<pair<long long,long long>> deq;

    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            long long x,c;
            cin >> x >> c;
            deq.push_back({x,c});
        }else{
            long long c;
            cin >> c;
            long long sum = 0;
            while(c != 0){
                if(c <= deq.front().second){
                    sum += deq.front().first * c;
                    deq.front().second -= c;
                    if(deq.front().second == 0){
                        deq.pop_front();
                    }
                    c = 0;
                }else{
                    sum += deq.front().first * deq.front().second;
                    c -= deq.front().second;
                    deq.pop_front();
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}

