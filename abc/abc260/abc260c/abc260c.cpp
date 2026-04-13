#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n,x,y;

long long ans = 0;
void solve(int lev,int c,long long s){
    if(c == 1){
        if(lev == 1){
            return;
        }
        solve(lev-1,1,s);
        solve(lev,0,s*x);
    }else{
        if(lev == 1){
            ans += s;
            return;
        }
        solve(lev-1,1,s);
        solve(lev-1,0,s*y);
    }
}

int main(){
    cin >> n >> x >> y;

    solve(n,1,1);

    cout << ans << endl;
}

