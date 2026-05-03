#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> pl;
vector<long long> ans;

void dfs(string s){
    if(s.size() > 10) return;

    if(s != ""){
        long long x = stoll(s);

        if(x > 1000000000){
            return;
        }

        ans.push_back(x);
    }

    for(int i=0;i < pl.size();i++){
        string next = s + pl[i];
        dfs(next);
    }
}

int main(){
    long long n;
    cin >> n;

    long long x = 1;
    while(x <= 1000000000){
        pl.push_back(to_string(x));
        x *= 2;
    }

    dfs("");

    sort(ans.begin(),ans.end());
    ans.erase(std::unique(ans.begin(),ans.end()),ans.end());

    cout << ans[n-1] << endl;
    return 0;
}

