#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i < n;i++){
        cin >> a[i];
    }

    vector<long long> b = a;
    sort(b.rbegin(),b.rend());
    int curr = b[0];
    long long sum = 0;
    vector<long long> ans(1000010);
    ans[b[0]] = 0;
    for(int i=0;i < n;i++){
        if(b[i] == curr){
            sum += b[i];
        }else{
            ans[b[i]] = sum;
            curr = b[i];
            sum += b[i];
        }
    }

    for(int i=0;i < n;i++){
        cout << ans[a[i]] << " ";
    }
}

