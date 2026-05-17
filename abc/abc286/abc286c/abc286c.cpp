#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    long long ans = LLONG_MAX;
    for(int i=0;i < n-1;i++){
        long long tmp = a * i;
        int start = i;
        for(int j=0;j < n/2;j++){
            if(s[(start+j)%n] != s[(start+n-1-j)%n]){
                tmp += b;
            }
        }
        ans = min(ans,tmp);
    }

    cout << ans << endl;
    return 0;
}

