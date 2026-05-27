#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> p;
int ans = 0;

void dfs(int v){
    if(v == 1){
        return;
    }

    ans++;
    dfs(p[v]);
}

int main(){
    int n;
    cin >> n;
    p.resize(n+1);
    for(int i=2;i <= n;i++){
        cin >> p[i];
    }

    dfs(n);

    cout << ans << endl;
    return 0;
}

