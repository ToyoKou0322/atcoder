#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int n,m;
   cin >> n >> m;
   vector<int> p(n);
   vector<int> c(n);
   vector<vector<int>> f(n);
   for(int i=0;i < n;i++){
       cin >> p[i] >> c[i];
       for(int j=0;j < c[i];j++){
           int x;
           cin >> x;
           f[i].push_back(x);
       }
   }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            bool x = false;
            bool y = true;
            bool z = false;
            if(i == j){
                continue;
            }

            if(p[i] >= p[j]){
                x = true;
            }

            for(int k=0;k < f[i].size();k++){
                auto it = find(f[j].begin(),f[j].end(),f[i][k]);
                if(it == f[j].end()){
                    y = false;
                    break;
                }
            }

            for(int k=0;k < f[j].size();k++){
                auto it = find(f[i].begin(),f[i].end(),f[j][k]);
                if(it == f[i].end()){
                    z = true;
                    break;
                }
            }

            if(p[i] > p[j]){
                z = true;
            }

            if(x && y && z){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

