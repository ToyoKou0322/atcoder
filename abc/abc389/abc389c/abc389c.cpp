#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    int q;
    cin >> q;

    deque<pair<long long,long long>> dq(0);
    long long fix = 0;
    while(q--){
        int num;
        cin >> num;
        if(num == 1){
            long long l;
            cin >> l;
            if(dq.size() == 0){
                dq.push_back({0,l});
            }else{
                dq.push_back({dq.back().first + dq.back().second,l});
            }
        }else if(num == 2){
            fix += dq.front().second;
            dq.pop_front();
        }else if(num == 3){
            int k;
            cin >> k;
            cout << dq.at(k-1).first - fix << endl;
        }
    }
    return 0;
}

