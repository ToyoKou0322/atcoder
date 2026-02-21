#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    for(int i=0;i < n;i++){
        cin >> b[i];
    }

    deque<pair<int,int>> q;
    for(int i=0;i < n;i++){

        //朝
        q.push_back({i+1,a[i]});

        //昼
        int need = b[i];
        while(!q.empty()){
            if(q.front().second <= need){
                need -= q.front().second;
                q.pop_front();
            }else{
                q.front().second -= need;
                break;
            }
        }

        //夜
        while(!q.empty()){
            if(i+1 - q.front().first >= d){
                q.pop_front();
            }else{
                break;
            }
        }
    }

    int ans = 0;
    for(auto x:q){
        ans += x.second;
    }

    cout << ans << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i < t;i++){
        solve();
    }
}

