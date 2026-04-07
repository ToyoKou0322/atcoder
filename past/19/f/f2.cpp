#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
int n;
string x,y;
unordered_map<string,int> str_to_id;
vector<string> id_to_str;
vector<vector<int>> g;
vector<int> seen;

int get_id(string s){
    if(str_to_id.find(s) == str_to_id.end()){
        str_to_id[s] = id_to_str.size();
        id_to_str.push_back(s);
        g.push_back({});
    }
    return str_to_id[s];
}

void dfs(int v){
    seen[v] = true;
    for(auto next : g[v]){
        if(!seen[next]){
            dfs(next);
        }
    }
}

int main(){
    cin >> n >> x >> y;
    int l = get_id(x);
    int m = get_id(y);
    for(int i=0;i < n;i++){
        string s,t;
        cin >> s >> t;
        int a = get_id(s);
        int b = get_id(t);
        g[a].push_back(b);
    }

    seen.assign(g.size()+1,false);
    dfs(str_to_id[x]);
    if(seen[str_to_id[y]]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

