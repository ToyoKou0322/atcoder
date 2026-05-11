#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> even,odd;
    for(int i=0;i < n;i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            even.push_back(a[i]);
        }else{
            odd.push_back(a[i]);
        }
    }

    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());

    long long x = -1;
    long long y = -1;

    if(even.size() >= 2){
        x = even[0] + even[1];
    }
    if(odd.size() >= 2){
        y = odd[0] + odd[1];
    }

    cout << max(x,y) << endl;
    return 0;
}

