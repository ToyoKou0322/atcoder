#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n,q;
    cin >> n >> q;
    long long ans = 0;
    vector<char> g(n+2,'.');
    for(int i=0;i < q;i++){
        int a;
        cin >> a;
        if(g[a] == '.'){
            g[a] = '#';
            if(g[a-1] == '#' && g[a+1] == '#'){
                ans--;
            }else if(g[a-1] == '#' || g[a+1] == '#'){
                
            }else{
                ans++;
            }
        }else{
            g[a] = '.';
            if(g[a-1] == '#' && g[a+1] == '#'){
                ans++;
            }else if(g[a-1] == '#' || g[a+1] == '#'){
                
            }else{
                ans--;
            }
        }

        cout << ans << endl;
    }
}

