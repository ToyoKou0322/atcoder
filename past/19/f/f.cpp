#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int n;
string x,y;
map<string,vector<string>> g;
map<string,bool> seen;
void dfs(string v){
    seen[v] = true;

    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next);
        }
    }
}

int main(){
    cin >> n;
    cin >> x >> y;
    for(int i=0;i < n;i++){
        string s,t;
        cin >> s >> t;
        g[s].push_back(t);
    }

    dfs(x);

    if(seen[y]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

