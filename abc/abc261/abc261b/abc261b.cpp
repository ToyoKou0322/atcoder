#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(a[i][j] == a[j][i] && (a[i][j] == 'W' || a[i][j] == 'L')){
                cout << "incorrect" << endl;
                return 0;
            }

            if(a[i][j] != a[j][i] && (a[i][j] == 'D' || a[j][i] == 'D')){
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }

    cout << "correct" << endl;
    return 0;
}

