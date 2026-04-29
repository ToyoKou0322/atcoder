#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int> presum(n+1);
    for(int i=1;i < n;i++){
        if(s[i] == s[i-1]){
            presum[i+1]++;
        }
    }

    for(int i=0;i < n;i++){
        presum[i+1] += presum[i];
    }

    while(q--){
        int l,r;
        cin >> l >> r;
        cout << presum[r] - presum[l] << endl;
    }

    return 0;
}

