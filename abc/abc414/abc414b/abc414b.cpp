#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<char,long long>> cl(n);
    for(int i=0;i < n;i++){
        cin >> cl[i].first >> cl[i].second;
    }

    string ans = "";
    long long c = 0;
    for(int i=0;i < n;i++){
        c += cl[i].second;
        if(c > 100){
            cout << "Too Long" << endl;
            return 0;
        }
        for(long long j=0;j < cl[i].second;j++){
            ans.push_back(cl[i].first);
        }
    }

    cout << ans << endl;
    return 0;
}

