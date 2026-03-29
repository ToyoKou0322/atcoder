#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    long long n;
    cin >> n;

    set<long long> ans;
    for(long long i=1;i*i <= n;i++){
        if(n % i == 0){
            ans.insert(i);
            ans.insert(n / i);
        }
    }

    for(auto a : ans){
        cout << a << endl;
    }
    return 0;
}

