#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int main(){
    int q;
    cin >> q;

    deque<pair<long long,long long>> a;
    for(int i=0;i < q;i++){
        int num;
        cin >> num;
        if(num == 1){
            long long c,x;
            cin >> c >> x;
            a.push_back({x,c});
        }else if(num == 2){
            long long k;
            cin >> k;
            long long ans = 0;
            while(k > 0 && !a.empty()){
                long long val = a.front().first;
                long long count = a.front().second;

                if(count <= k){
                    ans += val * count;
                    k -= count;
                    a.pop_front();
                }else{
                   ans += val * k;
                   a.front().second -= k;
                   k = 0;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}

