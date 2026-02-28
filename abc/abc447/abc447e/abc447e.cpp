#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   long long n,m;
   cin >> n >> m;
   vector<long long> u(m);
   vector<long long> v(m);
   vector<vector<pair<long long,long long>>> g(n);
   for(int i=0;i < m;i++){
        cin >> u[i] >> v[i];
        g[u[i]-1].push_back({v[i],i+1});
        g[v[i]-1].push_back({u[i],i+1});
   }

   for(int i=0;i < n;i++){
        for(int j=0;j < g[i].size();j++){
            cout << g[i][j].first << " " << g[i][j].second << " ";
        }
        cout << endl;
   }

   for(int i=0;i < n;i++){
       
   }


}

