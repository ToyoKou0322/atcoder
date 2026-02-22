#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for(int i=0;i < n;i++){
        for(int j=0;j < i+1;j++){
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    int current = 1;
    for(int i=1;i <= n;i++){
        if(current >= i){
            current = a[current-1][i-1];
        }else{
            current = a[i-1][current-1];
        }
    }

    cout << current << endl;
    return 0;
}

