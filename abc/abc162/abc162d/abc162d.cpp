#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    if(n < 3){
        cout << 0 << endl;
        return 0;
    }

    long long rc = 0;
    long long gc = 0;
    long long bc = 0;

    for(int i=0;i < n;i++){
        if(s[i] == 'R'){
            rc++;
        }else if(s[i] == 'G'){
            gc++;
        }else if(s[i] == 'B'){
            bc++;
        }
    }

    long long ans = rc * gc * bc;

    for(int i=0;i < n;i++){
        for(int j=i+1;j < n;j++){
            if(s[i] != s[j]){
                if(j-i+j >= n){
                    continue;
                }
                int x = 2*j-i;
                if(s[x] != s[i] && s[x] != s[j]){
                    ans--;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

