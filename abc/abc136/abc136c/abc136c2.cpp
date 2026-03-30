#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> h(n);
    for(int i=0;i < n;i++){
        cin >> h[i];
    }

    reverse(h.begin(),h.end());

    for(int i=1;i < n;i++){
        if(h[i] > h[i-1]){
            h[i]--;
        }
        if(h[i] > h[i-1]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

