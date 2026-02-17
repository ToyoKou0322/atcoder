#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int n;

vector<vector<char>> rotate(vector<vector<char>> g){
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            a[i][j] = g[n-1-j][i];
        }
    }
    return a;
}

int count_diff(const vector<vector<char>>& s, const vector<vector<char>>& t){
    int diff = 0;
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            if(s[i][j] != t[i][j]){
                diff++;
            }
        }
    }

    return diff;
}

int main(){
    cin >> n;

    vector<vector<char>> s(n,vector<char>(n));
    vector<vector<char>> t(n,vector<char>(n));
    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> s[i][j];
        }
    }

    for(int i=0;i < n;i++){
        for(int j=0;j < n;j++){
            cin >> t[i][j];
        }
    }

    int ans = INT_MAX;
    for(int i=0;i < 4;i++){
        int current_diff = count_diff(s,t);
        int cost = i + current_diff;
        ans = min(ans,cost);
        if(i < 3){
            s = rotate(s);
        }
    }

    cout << ans << endl;
    return 0;
}
