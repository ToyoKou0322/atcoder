#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
vector<vector<int>> g;
vector<int> g1,g2;

void dfs(int v,int p,bool x){
    if(x){
        g1.push_back(v);
    }else{
        g2.push_back(v);
    }
    for(auto next : g[v]){
        if(next != p){
            dfs(next,v,!x);
        }
    }
}

int main(){
    cin >> n;
    g.resize(n+1);
    for(int i=0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1,-1,false);
    if(g1.size() >= g2.size()){
        for(int i=0;i < n/2;i++){
            cout << g1[i] << " ";
        }
    }else{
        for(int i=0;i < n/2;i++){
            cout << g2[i] << " ";
        }
    }
}

