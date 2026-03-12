#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        cin >> c[i];
        for(int j=0;j < c[i];j++){
            int A;
            cin >> A;
            a[i].push_back(A);
        }
    }
    int x;
    cin >> x;

    int m = INT_MAX;
    for(int i=0;i < n;i++){
        for(int j=0;j < a[i].size();j++){
            if(a[i][j] == x){
                int s = a[i].size();
                m = min(m,s);
            }
        }
    }

    vector<int> ans;
    
    for(int i=0;i < n;i++){
        bool bet_on_x = false;
        for(int j=0;j < a[i].size();j++){
            if(a[i][j] == x){
                bet_on_x = true;
                break; 
            }
        }
        
        if(bet_on_x && c[i] == m){
            ans.push_back(i + 1);
        }
    }
    
    cout << ans.size() << endl;
    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
