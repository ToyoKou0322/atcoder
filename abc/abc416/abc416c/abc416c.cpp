#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,k;
long long x;
vector<string> s;
vector<string> candidates;

void dfs(string current_str, int depth){
    if(depth == k){
        candidates.push_back(current_str);
        return;
    }

    for(int i=0;i < n;i++){
        dfs(current_str + s[i],depth + 1);
    }
}

int main(){
    cin >> n >> k >> x;
    s.resize(n);
    for(int i=0;i < n;i++){
        cin >> s[i];
    }

    dfs("",0);

    sort(candidates.begin(),candidates.end());

    cout << candidates[x-1] << endl;

    return 0;
}

