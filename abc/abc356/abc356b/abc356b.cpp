#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<vector<int>> x(n,vector<int>(m));
    for(int i=0;i < m;i++){
        cin >> a[i];
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < m;j++){
            cin >> x[i][j];
        }
    }

    for(int i=0;i < m;i++){
        int sum = 0;
        for(int j=0;j < n;j++){
            sum += x[j][i];
        }
        if(sum < a[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

