#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string n;
    cin >> n;

    int s = n.size();

    int ans = 20;
    bool a = false;
    for(int bit=1;bit < (1 << n.size());bit++){
        string t = "";
        int c = 0;
        for(int i=0;i < n.size();i++){
            if(bit & (1 << i)){
                c++;
                t += n[i];
            }
        }
        long long x = stoll(t);
        if(x % 3 == 0){
            a = true;
            ans = min(ans,s-c);
        }
    }

    if(!a){
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}

