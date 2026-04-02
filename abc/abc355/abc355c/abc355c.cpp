#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> a(t);
    for(int i=0;i < t;i++){
        cin >> a[i];
    }

    vector<vector<int>> x(n,vector<int>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            x[i][j] = n * i + j + 1;
        }
    }

    vector<int> col(n,0),row(n,0);
    int diagonal = 0;
    int diagonal2 = 0;

    for(int i=0;i < t;i++){
        int m = (a[i]-1) % n;
        int l = (a[i]-m) / n;
        col[m]++;
        row[l]++;
        if(m == l){
            diagonal++;
        }
        if(m + l == n-1){
            diagonal2++;
        }
        if(col[m] == n || row[l] == n || diagonal == n || diagonal2 == n){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

