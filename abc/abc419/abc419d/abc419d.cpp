#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;

    vector<int> x(n+1,0);

    while(m--){
        int l,r;
        cin >> l >> r;

        x[l-1]++;
        x[r]--;
    }

    vector<int> imos(n+2);
    for(int i=0;i < n+1;i++){
        imos[i+1] = x[i] + imos[i];
    }

    for(int i=1;i <= n;i++){
        if(imos[i] % 2 == 0){
            cout << s[i-1];
        }else{
            cout << t[i-1];
        }
    }
    return 0;
}

