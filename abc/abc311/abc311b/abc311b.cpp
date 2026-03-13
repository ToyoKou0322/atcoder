#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<string> s(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    int ans = -1;
    int streak = 0;
    for(int i=0;i < d;i++){
        bool ok = true;
        for(int j=0;j < n;j++){
            if(s[j][i] != 'o'){
                ok = false;
                break;
            }
        }
        if(ok){
            streak++;
        }else{
            streak = 0;
        }
        ans = max(streak,ans);
    }

    cout << ans << endl;
    return 0;
}

