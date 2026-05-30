#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int ans = 0;
    while(m != 0){
        m = n % m;
        ans++;
    }

    cout << ans << endl;
}

