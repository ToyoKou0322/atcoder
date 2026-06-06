#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    sort(s.begin(),s.end());

    int ans = 0;
    do{
        bool ok = true;
        for(int i=0;i < n-k+1;i++){
            string t = "";
            for(int j=0;j < k;j++){
                t += s[i+j];
            }
            string u = t;
            reverse(u.begin(),u.end());
            if(t == u){
                ok = false;
                break;
            }
        }
        if(ok){
            ans++;
        }
    }while(next_permutation(s.begin(),s.end()));

    cout << ans << endl;
}

