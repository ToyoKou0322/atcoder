#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    string atcoder = "atcoder";
    vector<int> target_pos(7);

    for(int i=0;i < 7;i++){
        target_pos[i] = atcoder.find(s[i]);
    }

    int ans = 0;
    for(int i=0;i < 7;i++){
        for(int j=i+1;j < 7;j++){
            if(target_pos[i] > target_pos[j]){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

