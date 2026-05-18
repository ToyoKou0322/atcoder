#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<pair<int,int>> x;
    int sum = 0;
    for(int i=0;i < n;i++){
        sum++;
        if(x.empty() || a[i] != x.back().first){
            x.push_back({a[i],1});
        }else{
            x.back().second++;
        }

        if(x.back().second == a[i]){
            sum -= a[i];
            x.pop_back();
        }

        cout << sum << endl;
    }
    return 0;
}

