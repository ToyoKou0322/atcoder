#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long n,x;
vector<vector<long long>> a;
long long ans = 0;

void dfs(long long pos, long long current_x){
    if(pos == n){
        if(current_x == 1){
            ans++;
        }
        return;
    }

    for(long long ball : a[pos]){
        if(current_x % ball == 0){
            dfs(pos+1, current_x / ball);
        }
    }
}

int main(){
    cin >> n >> x;
    vector<long long> l(n);
    a.resize(n);
    for(int i=0;i < n;i++){
        cin >> l[i];
        for(int j=0;j < l[i];j++){
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }

    dfs(0,x);

    cout << ans << endl;
    return 0;
}

