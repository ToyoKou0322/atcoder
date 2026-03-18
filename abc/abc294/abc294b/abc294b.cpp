#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cin >> a[i][j];
        }
    }

    vector<char> x(27,'.');
    x[0] = '.';
    char curr = 'A';
    for(int i=1;i <= 26;i++){
        x[i] = curr;
        curr++;
    }

    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            cout << x[a[i][j]];
        }
        cout << endl;
    }
    return 0;
}

