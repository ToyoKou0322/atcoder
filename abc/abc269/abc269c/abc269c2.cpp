#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> ans;
    ans.push_back(0);
    for(long long i=n; i;i = (i - 1) & n){
        ans.push_back(i);
    }

    sort(ans.begin(),ans.end());

    for(auto v : ans){
        cout << v << endl;
    }
    return 0;
}

